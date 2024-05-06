#define mA1 5
#define mA2 4
#define mB1 3
#define mB2 2


void setup() {
  // put your setup code here, to run once:
pinMode(mA1,OUTPUT);
pinMode(mA2,OUTPUT);
pinMode(mB1,OUTPUT);
pinMode(mB2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(mA1,HIGH);
digitalWrite(mA2,LOW);
digitalWrite(mB1,HIGH);
digitalWrite(mB2,LOW);
delay(1000);
}
