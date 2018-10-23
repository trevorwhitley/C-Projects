// Name: calc.c
// Purpose: Create a basic calculator that switches variable types
// Author: Trevor Whitley
// Date 10/7/2018

#include <stdio.h>

int main(void) {

double first_term, second_term;
int option, first_int, second_int;
char var_type;
var_type = 'd';

printf("This program implements a calculator.\n");
printf("Option:\n1 - addition\n2 - subtraction\n3 - multiplication\n");
printf("4 - division\n5 - toggle calculator type\n6 - exit program\n");
printf("Please enter your option: ");
scanf("%d", &option);

while (option != 6) {

  if (var_type == 'd') {

    switch (option) {

      case 1:
        printf("Enter first term: ");
        scanf("%lf", &first_term);
        printf("Enter second term: ");
        scanf("%lf", &second_term);
        printf("The sum is: %.15lf\n", first_term + second_term);
        break;
      case 2:
        printf("Enter first term: ");
        scanf("%lf", &first_term);
        printf("Enter second term: ");
        scanf("%lf", &second_term);
        printf("The difference is: %.15lf\n", first_term - second_term);
        break;
      case 3:
        printf("Enter first term: ");
        scanf("%lf", &first_term);
        printf("Enter second term: ");
        scanf("%lf", &second_term);
        printf("The product is: %.15lf\n", first_term * second_term);
        break;
      case 4:
        printf("Enter first term: ");
        scanf("%lf", &first_term);
        printf("Enter second term: ");
        scanf("%lf", &second_term);
        if (second_term == 0) {
          printf("Cannot Divide by zero!\n");
        }
        else {
          printf("The quotient is: %.15lf\n", first_term / second_term);
        }
        break;
      case 5:
        var_type = 'i';
        printf("Calculator now works with integers.\n");
        break;
      default:
        printf("Invalid Option.\n");
        break;
      }
  }
  else {

    switch (option) {

      case 1:
        printf("Enter first term: ");
        scanf("%d", &first_int);
        printf("Enter second term: ");
        scanf("%d", &second_int);
        printf("The sum is: %d\n", first_int + second_int);
        break;
      case 2:
        printf("Enter first term: ");
        scanf("%d", &first_int);
        printf("Enter second term: ");
        scanf("%d", &second_int);
        printf("The difference is: %d\n",first_int - second_int);
        break;
      case 3:
        printf("Enter first term: ");
        scanf("%d", &first_int);
        printf("Enter second term: ");
        scanf("%d", &second_int);
        printf("The product is: %d\n", first_int * second_int);
        break;
      case 4:
        printf("Enter first term: ");
        scanf("%d", &first_int);
        printf("Enter second term: ");
        scanf("%d", &second_int);
        if (second_int == 0) {
          printf("Cannot Divide by zero!\n");
        }
        else {
          printf("The quotient is: %d\n", first_int / second_int);
        }
        break;
      case 5:
        var_type = 'd';
        printf("Calculator now works with doubles.\n");
        break;
      default:
        printf("Invalid Option.\n");
        break;
    }
  }


  printf("Option:\n1 - addition\n2 - subtraction\n3 - multiplication\n");
  printf("4 - division\n5 - toggle calculator type\n6 - exit program\n");
  printf("Please enter your option: "); 
  scanf("%d", &option);

}

return 0;

}
