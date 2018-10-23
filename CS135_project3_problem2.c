#include <stdio.h>

int main(void) {

int n, number_sums, i, result, solution;

printf("Enter an integer number: ");
scanf("%d", &n);

solution = 0;
i = -1;

for (number_sums = 1; number_sums <= n; number_sums++) {

i *= -1;
result = i * number_sums * number_sums;
solution += result;

}

printf("The value of the series is: %d\n", solution);

return 0;

}
