#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    char op;
    printf("enter the operation\n");
    scanf("%c",&op);
    printf("enter the first num\n");
    scanf("%d",&x);
    printf("enter the second num\n");
    scanf("%d",&y);
    switch(op){
case '+':
    printf("%d+%d=%d",x,y,x+y);
break;
case '-':
    printf("%d-%d=%d",x,y,x-y);
break;
case '*':
    printf("%d*%d=%d",x,y,x*y);
break;
case '/':
    printf("%d/%d=%d",x,y,x/y);
break;
default :
    printf("error");


    }
    return 0;
}
