#include<stdio.h>
int main(){
float num1,num2,num3;
printf("Enter 1st Number:\t");
scanf("%f",&num1);
printf("Enter 2nd Number:\t");
scanf("%f",&num2);
printf("Enter 3rd Number:\t");
scanf("%f",&num3);
printf("The average of three number is %.2f", (num1+num2+num3)/3); //.2f shows decimal upto 2 digits
return 0;
}

