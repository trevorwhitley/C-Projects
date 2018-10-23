/*
Name: CS135_project1_problem1.c
Purpose: Compute values related to an inscribed circle.
Author: Trevor Whitley
Date: 9/6/18
*/

#include <stdio.h>

int main(void) {

#define pi 3.14f

int radius, diameter, perimeter_square, area_square;
float circumference, area_circle, area_diff;

printf("This program computes values related to an inscribed circle.\n");
printf("Enter the value of the radius: ");
scanf("%d", &radius);

diameter = radius + radius;
circumference = 2 * pi * radius;
area_circle = pi * radius * radius;
perimeter_square = diameter * 4;
area_square = diameter * diameter;
area_diff = area_square - area_circle;

printf("The diameter of the circle is: %d\n", diameter);
printf("The circumference of the circle is: %.3f\n", circumference);
printf("The area of the circle is: %.3f\n", area_circle);
printf("The perimeter of the square is: %d\n", perimeter_square);
printf("The area of the square is: %d\n", area_square);
printf("The difference between the area of the square and the circle is: %.3f\n"
, area_diff);

return 0;

}
