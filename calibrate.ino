// program to calibrate the IR sensor according to various lighting conditions


int led1 = 9;
int led2 = 8;
int led3 = 11;
int led4 = 12;
int val;
int s;
int analogPin = 3; 
void setup()
{   Serial.begin(9600);            
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT) ;  
    pinMode(led3, INPUT);
    pinMode(led4, INPUT) ; 
    pinMode(analogPin, INPUT) ; 
val=0;
}

void loop()
{  digitalWrite(led2, HIGH);
 val = analogRead(analogPin);    

Serial.println(val);      //this value can be viewed using serial monitor terminal in arduino toolbox
 
   
}
