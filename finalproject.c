#include <stdio.h>
#include <stdlib.h>
struct patient{
int age,id;
char name[1000],gender[6];
};
int count=0;
int reserve[5]={1,1,1,1,1};
struct patient patients[1000];
void adminmode(void);
void usermode(void);
void patientt(void);
void newpatient(void);
void editpatient(void);
void reservation(void);
void cancelreserve(void);
void patientrecord(void);
void todayreservation(void);
int main()
{
  int mode;
  printf("1 for adminmode and 2 for usermode\n");
  printf("Enter the mode you want:");
  scanf("%d",&mode);
  if(mode==1)
    {
 adminmode();
        }
   else if(mode==2){
usermode();
   }


    return 0;
}
void adminmode(){
    int i=1,enterdpass,password = 1234;
for(i=1;i<=3;i++){
    printf("Enter the password:\n");
    scanf("%d",&enterdpass);
    if(enterdpass==password){
patientt();
break;
    }
    else{
    printf("wrong password,try again\n");
    }
}
exit(1);
}
void usermode(){
    int mode;
printf("enter which service you want:\n");
printf("1 to view patientrecored and 2 to view today'sreservation:");
scanf("%d",&mode);
if(mode==1)
patientrecord();
else if(mode==2)
todayreservation();
}
void patientt(){
int patientmode;
printf("1 to add a new patient\n");
printf("2 to edit patient record\n");
printf("3 to reserve a slot with the doctor\n");
printf("4 to cancel reservation\n");
printf("enter which service you want:");
scanf("%d",&patientmode);
if(patientmode==1)
newpatient();
else if(patientmode==2)
editpatient();
else if(patientmode==3)
reservation();
else if(patientmode==4)
cancelreserve();
else
printf("ERROR");}
void newpatient(){
    int i=0;
struct patient newPatient;
printf("enter the name of the patient:");
scanf("%s",&newPatient.name);
printf("enter the age of the patient:");
scanf("%d",&newPatient.age);
printf("enter the gender of the patient:");
scanf("%s",&newPatient.gender);
printf("enter the id of the patient:");
scanf("%d",&newPatient.id);
for (int i=0;i<count;i++){
if(patients[i].id==newPatient.id){
printf("id already exists");
exit(1);
}}
patients[count++]=newPatient;
printf("A new patient has been added\n");
}
void editpatient(){
int id;
printf("enter the id of the patient you want to edit");
scanf("%d",&id);
for(int i=0;i<count;i++){
    if(patients[i].id == id){
        printf("enter the new name:");
        scanf("%s",patients[i].name);
         printf("enter the gender:");
        scanf("%s",patients[i].gender);
         printf("enter the age:");
        scanf("%d",&patients[i].age);
    }
    else{
        printf("id doesnot exist");
}
}
}
void reservation(){
int id,appointment;
printf("enter your id to reserve an appointment:");
scanf("%d",&id);
for(int i=0;i<5;i++){
    if(reserve[i]==1)
        printf("appointment %d is available\n",i+1);
    else
        printf("appointment %d is not available\n",i+1);
}
printf("enter the appoinment you want to reserve:");
scanf("%d",&appointment);
if(reserve[appointment-1]==0){
    printf("appointment %d is not available\n",appointment);
}else{
reserve[appointment-1]=0;
printf("Now you reserved appointment %d\n",appointment);
}}
void cancelreserve(){
int id,appointment;
printf("enter your id to cancel the reservation:");
scanf("%d",&id);
printf("enter the appointment you want to cancel:");
scanf("%d",&appointment);
reserve[appointment-1]=1;
printf("now you cancelled appointment %d\n",appointment);
}
void patientrecord(){
int id;
printf("enter the id:");
scanf("%d",&id);
for(int i=0;i<count;i++){
if(patients[i].id==id){
    printf("Name:%s\n",patients[i].name);
    printf("Age:%d\n",patients[i].age);
    printf("Gender:%s",patients[i].gender);
}
else {
    printf("id doesnot exist");
}
}
}
void todayreservation(){
int appointment;
for(int i=0;i<5;i++){
 if(reserve[i]==1) {
printf("appointment %d is not reserved\n",i+1);
 }
else if(reserve[i]==0){
 printf("appointment %d is reserved\n",i+1);
}}}
