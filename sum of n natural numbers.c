#include<stdio.h>
int main()
{int n;
    printf("Enter number:\n");
    scanf("%d",&n);
    
    int sum=0;
     for(int j=n;j>=1; j--){
        sum+=j;
        printf("%d\n",j);
    }
        printf("sum is %d\n", sum);

        //reverse order
       // for(int i=n; i>=1; i--){
       //     printf("%d\n",i);
       // }
        

  return 0;
}