#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("Enter the number:");
    scanf("%d",&x);
    printf("Enter the bit to be cleared:");
    scanf("%d",&y);
    z=x&(~(1<<y));
    printf("the number after clearing the bit number %d is %d",y,z);
    return 0;
}
