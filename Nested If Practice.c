#include<stdio.h>
int main(){
    int number;
    printf("Enter Number:");
    scanf("%d",&number);
    if(number>=0){
        printf("positive number\n");
        if(number % 2 ==0){
            printf("Even\n");}
            else{
                printf("odd number\n");}
            }
         else {
            printf("negative number\n");
         }
         return 0;
    }
