const int pinA2=13;
const int pinB2=12;
const int pinC2=11;
const int pinD2=10;
const int pinE2=9;
const int pinF2=8;
const int pinG2=7;
const int pinA1=6;
const int pinB1=5;
const int pinC1=4;
const int pinD1=3;
const int pinE1=2;
const int pinF1=1;
const int pinG1=0;


void setup()
{
  pinMode(pinA1, OUTPUT);
  pinMode(pinA2, OUTPUT);
  pinMode(pinB1, OUTPUT);
  pinMode(pinB2, OUTPUT);
  pinMode(pinC1, OUTPUT);
  pinMode(pinC2, OUTPUT);
  pinMode(pinD1, OUTPUT);
  pinMode(pinD2, OUTPUT);
  pinMode(pinE1, OUTPUT);
  pinMode(pinE2, OUTPUT);
  pinMode(pinF1, OUTPUT);
  pinMode(pinF2, OUTPUT);
  pinMode(pinG1, OUTPUT);
  pinMode(pinG2, OUTPUT);
}

void loop()
{
  static int count = 0;
  while (count<100)
  {
   a=count/10;
   b=count%10;
   choose1(b);
   choose2(a);
   delay(500);
   digitalWrite_LOW();
   count++;
  }
}

int choose1(int num)
{
  int a = num;
  switch(a){
    case 1  :
         digitalWrite(pinB1, HIGH);
         digitalWrite(pinC1, HIGH);
         break
    case 2  :
         digitalWrite(pinA1, HIGH);
         digitalWrite(pinB1, HIGH);
         digitalWrite(pinD1, HIGH);
         digitalWrite(pinE1, HIGH);
         digitalWrite(pinG1, HIGH);
         break;
    case 3  :
         digitalWrite(pinA1, HIGH);
         digitalWrite(pinB1, HIGH);
         digitalWrite(pinC1, HIGH);
         digitalWrite(pinD1, HIGH);
         digitalWrite(pinG1, HIGH);
         break;
    case 4  :
         digitalWrite(pinB1, HIGH);
         digitalWrite(pinC1, HIGH);
         digitalWrite(pinF1, HIGH);
         digitalWrite(pinG1, HIGH);
         break;
    case 5  :
         digitalWrite(pinA1, HIGH);
         digitalWrite(pinF1, HIGH);
         digitalWrite(pinD1, HIGH);
         digitalWrite(pinC1, HIGH);
         digitalWrite(pinG1, HIGH);
         break;
    case 6  :
         digitalWrite(pinA1, HIGH);
         digitalWrite(pinC1, HIGH);
         digitalWrite(pinD1, HIGH);
         digitalWrite(pinE1, HIGH);
         digitalWrite(pinF1, HIGH);
         digitalWrite(pinG1, HIGH);
         break;
    case 7  :
         digitalWrite(pinA1, HIGH);
         digitalWrite(pinB1, HIGH);
         digitalWrite(pinD1, HIGH);
         digitalWrite(pinE1, HIGH);
         digitalWrite(pinG1, HIGH);
         break;
    case 8  :
         digitalWrite(pinA1, HIGH);
         digitalWrite(pinB1, HIGH);
         digitalWrite(pinC1, HIGH);
         digitalWrite(pinD1, HIGH);
         digitalWrite(pinE1, HIGH);
         digitalWrite(pinF1, HIGH);
         digitalWrite(pinG1, HIGH);
         break;
    case 9  :
         digitalWrite(pinA1, HIGH);
         digitalWrite(pinB1, HIGH);
         digitalWrite(pinC1, HIGH);
         digitalWrite(pinD1, HIGH);
         digitalWrite(pinF1, HIGH);
         digitalWrite(pinG1, HIGH);
         break;
    case 0  :
         digitalWrite(pinA1, HIGH);
         digitalWrite(pinB1, HIGH);
         digitalWrite(pinC1, HIGH);
         digitalWrite(pinD1, HIGH);
         digitalWrite(pinE1, HIGH);
         digitalWrite(pinF1, HIGH);
         break;
  }
}

int choose2(int num)
{
  int a = num;
  switch(a){
    case 1  :
         digitalWrite(pinB2, HIGH);
         digitalWrite(pinC2, HIGH);
         break; 
    case 2  :
         digitalWrite(pinA2, HIGH);
         digitalWrite(pinB2, HIGH);
         digitalWrite(pinD2, HIGH);
         digitalWrite(pinE2, HIGH);
         digitalWrite(pinG2, HIGH);
         break;
    case 3  :
         digitalWrite(pinA2, HIGH);
         digitalWrite(pinB2, HIGH);
         digitalWrite(pinC2, HIGH);
         digitalWrite(pinD2, HIGH);
         digitalWrite(pinG2, HIGH);
         break;
    case 4  :
         digitalWrite(pinB2, HIGH);
         digitalWrite(pinC2, HIGH);
         digitalWrite(pinF2, HIGH);
         digitalWrite(pinG2, HIGH);
         break;
    case 5  :
         digitalWrite(pinA2, HIGH);
         digitalWrite(pinF2, HIGH);
         digitalWrite(pinD2, HIGH);
         digitalWrite(pinC2, HIGH);
         digitalWrite(pinG2, HIGH);
         break;
    case 6  :
         digitalWrite(pinA2, HIGH);
         digitalWrite(pinC2, HIGH);
         digitalWrite(pinD2, HIGH);
         digitalWrite(pinE2, HIGH);
         digitalWrite(pinF2, HIGH);
         digitalWrite(pinG2, HIGH);
         break;
    case 7  :
         digitalWrite(pinA2, HIGH);
         digitalWrite(pinB2, HIGH);
         digitalWrite(pinD2, HIGH);
         digitalWrite(pinE2, HIGH);
         digitalWrite(pinG2, HIGH);
         break;
    case 8  :
         digitalWrite(pinA2, HIGH);
         digitalWrite(pinB2, HIGH);
         digitalWrite(pinC2, HIGH);
         digitalWrite(pinD2, HIGH);
         digitalWrite(pinE2, HIGH);
         digitalWrite(pinF2, HIGH);
         digitalWrite(pinG2, HIGH);
         break;
    case 9  :
         digitalWrite(pinA2, HIGH);
         digitalWrite(pinB2, HIGH);
         digitalWrite(pinC2, HIGH);
         digitalWrite(pinD2, HIGH);
         digitalWrite(pinF2, HIGH);
         digitalWrite(pinG2, HIGH);
         break;
    case 0  :
         digitalWrite(pinA2, HIGH);
         digitalWrite(pinB2, HIGH);
         digitalWrite(pinC2, HIGH);
         digitalWrite(pinD2, HIGH);
         digitalWrite(pinE2, HIGH);
         digitalWrite(pinF2, HIGH);
         break;
  }
}

int digitalWrite_LOW()
{
   digitalWrite(pinA2, LOW);
   digitalWrite(pinB2, LOW);
   digitalWrite(pinC2, LOW);
   digitalWrite(pinD2, LOW);
   digitalWrite(pinE2, LOW);
   digitalWrite(pinF2, LOW);
   digitalWrite(pinG2, LOW);
   delay(500)
}