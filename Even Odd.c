#include<stdio.h>
int main() {
//even -> 1 -> True
//odd -> 0 -> False
int x;
printf("Enter Number:");
scanf("%d",&x);
printf("%d", x % 2 == 0);
return 0;}
