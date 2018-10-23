#include <stdio.h>
#include <math.h>

int main(void) {

int number_loops;
float new_guess, old_guess, number, precision;

printf("Enter a number: ");
scanf("%f", &number);

number_loops = 0;
new_guess = 1.0;
precision = fabs((new_guess * new_guess) - number);

while (precision >= 1e-5) {
  printf("%d\t%10.5lf\n", number_loops, new_guess);
  old_guess = new_guess;
  new_guess = (old_guess + (number / old_guess)) / 2.0;
  precision = fabs(number - (new_guess * new_guess));
  number_loops++;
}

printf("Estamated square root of %.5f: %.5f\n", number, new_guess);

return 0;

}
