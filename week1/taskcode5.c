#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,z;
   printf("enter the first num:\n");
   scanf("%d",&x);
   printf("enter the second num:\n");
   scanf("%d",&y);
   printf("enter the third num:\n");
   scanf("%d",&z);
   if(x>y)
   {
       if(x>z){
        printf("%d",x);
       }
       else{
        printf("%d",z);
       }
   }
   else if(y>z){
    printf("%d",y);
   }
   else{
    printf("%d",z);
   }
    return 0;
}
