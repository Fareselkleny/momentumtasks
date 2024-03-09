#include <stdio.h>
#include <stdlib.h>
int fun1(int *database1,int *database2);
void fun2();
void fun3();
void fun4();

int main()
{
int pass,id;
printf("enter the password\n");
scanf("%d",&pass);
printf("enter the id\n");
scanf("%d",&id);
fun1(&pass,&id);
return 0;
}
int fun1(int *database1,int *database2){
if(*database1 == 4444 && *database2 == 48088){
    fun2();
}
else{
    printf("wrong data");
}
return 0;
}

void fun2(){
printf("welcome fares in momentum\n");
fun3();
}
void fun3(){
printf("fares mohamed elkleny\n");
printf("lvl 100\n");
printf("joined in feb\n");
printf("ronin generation\n");
printf("level A1\n");
printf("mechatronics department\n");
fun4();
}
void fun4(){
printf("work hard in silence,let your success be your noise");
}

