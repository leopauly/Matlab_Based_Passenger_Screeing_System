// The main arduino program 
// It controls the lcd display,Serial interface,Indicator interface along with the motor interface


#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int led1 = 9;
int led2 = 8;

int val;
int s;
int analogPin = 3; 
void setup()
{   Serial.begin(9600);            
    lcd.begin(16, 2);
    lcd.print("welcome");
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT) ;  
   
   
    pinMode(analogPin, INPUT) ; 
val=0;
}

void loop()
{  digitalWrite(led2, HIGH);
 val = analogRead(analogPin);    

Serial.println(val);
  while(1)
  {   
  while(val<300){
  val = analogRead(analogPin); 
  }
   Serial.write('1');
   digitalWrite(led2, LOW);
    break ;
  }

while(1)
   {if(Serial.available()>0)           
    {s=Serial.read();
      if (s=='3')
         digitalWrite(led2,HIGH);       
      break ;}
   }
      
  
digitalWrite(led1,HIGH);     // this pin is also used to drive the motor at the gate.The pin no:9 is couple bw led indicator and motor driver input
  // digitalWrite(led3,LOW);
  
  delay(1000);
  delay(1000);
  delay(1000);
  delay(1000);
  delay(1000);
  delay(1000);
  delay(1000);
  delay(1000);
  delay(1000);
  delay(1000);
  delay(1000);
  delay(1000);
   
   // digitalWrite(led3,HIGH);
  digitalWrite(led1,LOW);
   
}
