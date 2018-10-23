/*
Name: CS135_project1_problem1.c
Purpose: Displays four dates on a tabular data table
Author: Trevor Whitley
Date: 9/6/18
*/

#include <stdio.h>

int main(void) {

int dd1, mm1, yyyy1;
int dd2, mm2, yyyy2;
int dd3, mm3, yyyy3;
int dd4, mm4, yyyy4;

printf("Enter date 1 (dd/mm/yyyy): ");
scanf("%2d/%2d/%4d", &dd1, &mm1, &yyyy1);

printf("Enter date 2 (dd/mm/yyyy): ");
scanf("%2d/%2d/%4d", &dd2, &mm2, &yyyy2);

printf("Enter date 3 (dd/mm/yyyy): ");
scanf("%2d/%2d/%4d", &dd3, &mm3, &yyyy3);

printf("Enter date 4 (dd/mm/yyyy): ");
scanf("%2d/%2d/%4d", &dd4, &mm4, &yyyy4);

printf("Year\tMonth\tDay\n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n"
, yyyy1, mm1, dd1, yyyy2, mm2, dd2, yyyy3, mm3, dd3, yyyy4, mm4, dd4);

return 0;

}
