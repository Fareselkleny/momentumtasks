#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,sum=0;
    printf("enter a num:");
    scanf("%d",&x);
    for(int i=x;i>=1;i--){
        sum=sum+i;
    }
printf("summation of natural numbers is %d",sum);
    return 0;
}
