// Name: tictactoe_c.c
// Purpose: Make a tictactoe game using functions that runs in a loop.
// Author: Trevor Whitley
// Date: 10/17/18

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

void display_table(char board[SIZE][SIZE]);
void clear_table(char board[SIZE][SIZE]);
_Bool check_table_full(char board[SIZE][SIZE]);
void update_table(char board[SIZE][SIZE], int row, int col, char player_token);
_Bool check_legal_option(char board[SIZE][SIZE], int row, int col);
int check_three_in_a_row(char board[SIZE][SIZE]);
_Bool check_end_of_game(char board[SIZE][SIZE]);
void generate_player2_move(char board[SIZE][SIZE], int row, int col);
void get_player1_move(char board[SIZE][SIZE], int row, int col);
void print_winner(char board[SIZE][SIZE]);
char play_game_again(char play_again);

int main(void) {
  char board[SIZE][SIZE], play_again;
  int row, col;
  do {
    clear_table(board);

    display_table(board);

    do {
      get_player1_move(board, row, col);
      generate_player2_move(board, row, col);
    } while (check_end_of_game(board) == false);

    print_winner(board);
    play_game_again(play_again);
} while (play_game_again(play_again) == 'Y');

  return 0;
}

void display_table(char board[SIZE][SIZE]) {
  printf("The current state of the game is:\n");
  for (int i = 0; i < SIZE; i++){
    for (int j = 0; j < SIZE; j++) {
      printf("%c ", board[i][j]);
    }
    printf("\n");
  }
}

void clear_table(char board[SIZE][SIZE]) {
  for (int i = 0; i < SIZE; i++){
    for (int j = 0; j < SIZE; j++) {
      board[i][j] = '_';
    }
  }
}

_Bool check_table_full(char board[SIZE][SIZE]) {
  _Bool table_full = true;
  for (int i = 0; i < SIZE; i++){
    for (int j = 0; j < SIZE; j++) {
      if (board[i][j] == '_') {
        table_full = false;
        break;
        }
      }
    }
  return table_full;
}

void update_table(char board[SIZE][SIZE], int row, int col, char player_token) {
  if (player_token == 'X') {
    board[row - 1][col - 1] = 'X';
  }
  else {
    board[row - 1][col - 1] = 'O';
  }
}

_Bool check_legal_option(char board[SIZE][SIZE], int row, int col) {
  _Bool legal_option;
  if (row > 3 || row < 1 || col > 3 || col < 1 || board[row - 1][col - 1] != '_') {
    legal_option = false;
  }
  else {
    legal_option = true;
  }
  return legal_option;
}

int check_three_in_a_row(char board[SIZE][SIZE]) {
  if ((board[0][0] == 'X'  && board[0][1] == 'X' && board[0][2] == 'X')
  || (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
  || (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
  || (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
  || (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
  || (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
  || (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
  || (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')) {
    return 2;
  }
  else if ((board[0][0] == 'O'  && board[0][1] == 'O' && board[0][2] == 'O')
  || (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
  || (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
  || (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
  || (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
  || (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
  || (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
  || (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')) {
    return 1;
  }
  else {
    return 0;
  }
}

_Bool check_end_of_game(char board[SIZE][SIZE]) {
  _Bool end_game = false;
  if (check_three_in_a_row(board) == 1 || check_three_in_a_row(board) == 2 || check_table_full(board) == true) {
    end_game = true;
  }
  return end_game;
}

void generate_player2_move(char board[SIZE][SIZE], int row, int col) {
  char player_token = 'X';
  if (check_end_of_game(board) == false) {
    srand(time(NULL));
    row = 1 + rand() % 3;
    col = 1 + rand() % 3;
    do {
      if (check_legal_option(board, row, col) == false) {
        srand(time(NULL));
        row = 1 + rand() % 3;
        col = 1 + rand() % 3;
      }
    } while (check_legal_option(board, row, col) == false);
    printf("Player 2 has entered [row, col]: %d, %d\n", row, col);
  }
  update_table(board, row, col, player_token);
  display_table(board);
}

void get_player1_move(char board[SIZE][SIZE], int row, int col) {
  char player_token = 'O';
  if (check_end_of_game(board) == false) {
    printf("Player 1 enter your selection [row, col]: ");
    scanf("%d,%d", &row, &col);
    while (check_legal_option(board, row, col) == false) {
      printf("Player 1 enter your selection [row, col]: ");
      scanf("%d,%d", &row, &col);
    }
  }
  update_table(board, row, col, player_token);
  display_table(board);
}

void print_winner(char board[SIZE][SIZE]) {
  if (check_three_in_a_row(board) == 1) {
    printf("Congratulations, Player 1 wins!\n");
  }
  else if (check_three_in_a_row(board) == 2) {
    printf("Congratulations, Player 2 wins!\n");
  }
  else if (check_table_full(board) == true && check_three_in_a_row(board) == 0) {
    printf("Game over, no payer wins.\n");
  }
}

char play_game_again(char play_again) {
  printf("Would you like to play again (Y/N): ");
  scanf("%c", &play_again);
  return play_again;
}
