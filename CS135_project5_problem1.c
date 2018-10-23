// Name: arrays.c
// Purpose: sort out the number of digits in an NxM array that user enters.
// Author: Trevor Whitley
// Date: 10/9/18

#include <stdio.h>

#define num 10

int main(void) {

  int digits[num] = {0}, i, j, N, M;

  printf("This program counts occurrences of digits 0 through 9 in an NxM array.\n\n");
  printf("Enter the size of the array (Row Column): ");
  scanf("%d %d", &N, &M);
  printf("\n");

  int array[N][M];

  for (i = 0; i < N; i++) {
    printf("Enter row %d: ", i);
    for (j = 0; j < M; j++) {
      scanf("%d", &array[i][j]);
    }
  printf("\n");
  }

  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      switch (array[i][j]) {
        case 0: digits[0]++; break;
        case 1: digits[1]++; break;
        case 2: digits[2]++; break;
        case 3: digits[3]++; break;
        case 4: digits[4]++; break;
        case 5: digits[5]++; break;
        case 6: digits[6]++; break;
        case 7: digits[7]++; break;
        case 8: digits[8]++; break;
        case 9: digits[9]++; break;
      }
    }
  }

  printf("Total counts for each digit:\n\n");
  for (i = 0; i < num; i++) {
    printf("Digit %d occurs %d times\n\n", i, digits[i]);
  }

  printf("The digit counts directly from the 1D array:\n\n");
  for (i = 0; i < num; i++) {
    printf("%d ", digits[i]);
  }
  printf("\n\n");

  printf("The original 2D array entered by the user:\n\n");
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      printf("%d ", array[i][j]);
    }
  printf("\n\n");
  }

return 0;

}
