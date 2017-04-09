const byte ledPin = 13;
void setup() 
{
  Serial.begin(9600);
}

void loop()
{
 if(Serial.available())
 {
   int val;
   val = Serial.read();
   switch(val)
   {
     case '0':
       digitalWrite(ledPin,LOW);
       Serial.println("LED OFF");
       delay(3000);
       break;
     
     case '1':
       digitalWrite(ledPin,HIGH);
       Serial.println("LED ON");
       delay(5000);
       break;
   } 
 }
}
  

