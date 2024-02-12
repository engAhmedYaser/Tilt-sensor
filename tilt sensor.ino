// C++ code
//

int enable1=3;
int input2 = 5;
int tilt =2;
int reading ; 
void setup()
{pinMode( enable1,OUTPUT);
 pinMode( input2,OUTPUT);
  pinMode( tilt,INPUT);
}

void loop()
{
  reading = digitalRead(tilt);
  if(reading == HIGH){
   digitalWrite( enable1,HIGH);
    digitalWrite( input2,HIGH);}
  else if(reading == LOW){
    digitalWrite( enable1,LOW);}

}    