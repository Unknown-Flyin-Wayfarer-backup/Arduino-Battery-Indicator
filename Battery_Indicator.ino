int analogInput = A0;
float v = 0;
float value = 0;
float batteryPer = 0.0;
float in_min = 2.5;
float in_max = 3.6;
float out_min = 0.0;
float out_max = 100.0;

void setup()
{
  Serial.begin(9600);
  pinMode(analogInput, INPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(2,OUTPUT);
  
}
void loop()
{
  value = analogRead(analogInput);
  v = (value * 100) / 1023;
  if(v>=75){
     digitalWrite(8,HIGH);
     digitalWrite(7,HIGH);
     digitalWrite(4,HIGH);
     digitalWrite(2,HIGH);}

   else if(v>=50 && v<75){
     digitalWrite(7,HIGH);
     digitalWrite(4,HIGH);
     digitalWrite(2,HIGH);}
     
   else if(v>=25 && v<50){
     digitalWrite(4,HIGH);
     digitalWrite(2,HIGH);}
     
   else(v>=0 && v<25){
     digitalWrite(2,HIGH);}
  
  
  
  
  Serial.print("Battery Percentage = ");
  Serial.print(v);
  Serial.println("%");
  
  delay(500);
}
