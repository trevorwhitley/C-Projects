#include <stdio.h>
#include <math.h>

int main(void) {

double new_guess, old_guess, number, precision;

printf("Enter a number: ");
scanf("%lf", &number);

new_guess = 1.0f;
precision = fabs((new_guess * new_guess) - number);

while (precision > 1e-5) {
  printf("%10.5lf\n", new_guess);
  old_guess = new_guess;
  new_guess = (old_guess + (number / old_guess)) / 2.0;
  precision = fabs(number - (new_guess * new_guess));
}

printf("Estamated square root of %.5lf: %.5lf\n", number, new_guess);

return 0;

}
