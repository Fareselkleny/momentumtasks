

struct patient{
int age,id;
char name[1000],gender[6];
};
int count =0;
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
