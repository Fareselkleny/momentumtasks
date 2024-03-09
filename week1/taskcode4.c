#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,fact=1;
   printf("enter the num");
   scanf("%d",&num);
   if (num%2==0)
   {
       printf("number is even\n");
   }
   else{
    printf("number is odd\n");
   }
   for(int i=1;i<=num;i++)
   {
       fact= fact*i;
   }
   printf("factorial of num %d is %d",num,fact);
    return 0;
}
