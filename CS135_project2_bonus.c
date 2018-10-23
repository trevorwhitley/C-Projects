// Name: collections_c.c
// Purpose: Find the collections that Bob can purchase
// Author: Trevor Whitley
// Date: 9/13/18

#include <stdio.h>

int main(void) {

int volumes1, price1, volumes2, price2, volumes3, price3, budget;
int collection1, collection2, collection3;

printf("Enter volumes and price per volume for collection 1: ");
scanf("%d %d", &volumes1, & price1);
printf("Enter volumes and price per volume for collection 2: ");
scanf("%d %d", &volumes2, & price2);
printf("Enter volumes and price per volume for collection 3: ");
scanf("%d %d", &volumes3, & price3);
printf("Enter Bob's budget: ");
scanf("%d", &budget);

collection1 = volumes1 * price1;
collection2 = volumes2 * price2;
collection3 = volumes3 * price3;

//condition number 1
if(budget > 0) {
  printf("(1) Bob has some money to buy collections\n");
  }
else {
  printf("(1) Bob does not have money to buy anything\n");
  }

//condition number 2
if ((budget < collection1 && budget < collection2) || (budget < collection1
  && budget < collection3) || (budget < collection2 && budget < collection3)) {
    printf("(2) At least two collections are more expensive than Bob's budget.\n");
}
else {
  printf("(2) At least two collections are cheaper than or equal to Bob's budget.\n");
}

//condition number 3
if (collection1 == collection2 && collection1 == collection3 && collection2 == collection3) {
  printf("(3) All collections cost the same.\n");
}
else if ((collection1 == collection2) || (collection1 == collection3)
|| (collection2 == collection3)) {
  printf("(3) Only two collections cost the same amount of money.\n");
}
else {
  printf("(3) No collection have the same price.\n");
}

//condition number 4
if ((budget >= collection1 && budget < collection2 && budget < collection3)
|| (budget < collection1 && budget >= collection2 && budget < collection3)
|| (budget < collection1 && budget < collection2 && budget >= collection3)) {
  printf("(4) Only one collection is cheaper than or equal to Bob's budget.\n");
}
else {
  printf("(4) More than one collection is cheaper than or equal to Bob's budget or they are all more expensive.\n");
}

//condition number 5
if (budget >= collection1 + collection2 + collection3) {
  printf("(5) Bob can buy all three collections.\n");
}
else if ((budget >= collection1 + collection2)
|| (budget >= collection1 + collection3)
|| (budget >= collection2 + collection3)) {
  printf("(5) Bob can only buy two of the collections.\n");
}
else if ((budget >= collection1) || (budget >= collection2)
|| (budget >= collection3)) {
  printf("(5) Bob can only buy one collection.\n");
}
else {
  printf("(5) Bob cannot buy any collections.\n");
}

//condition number 6
if (budget >= collection1 && budget >= collection2 && budget >= collection3) {
  printf("(6) Bob has enough money to buy any one of the three collections.\n");
}
else {
  printf("(6) Bob does not have enough money to buy any one of the three collections.\n");
}

//condition number 7
if (budget < collection1 && budget < collection2 && budget < collection3) {
  printf("(7) Bob does not have enough money to buy any collections.\n");
}
else {
  printf("(7) Bob can buy at least one collection.\n");
}

return 0;

}
