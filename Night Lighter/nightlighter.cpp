#define cikis A0
int deger=0;
void setup()
{
  pinMode(cikis, INPUT);
  Serial.begin(9600);
}

void loop()
{
  deger=analogRead(cikis);
  Serial.println(deger);
  if(deger<300){
    digitalWrite(8,HIGH);}
  else{
    digitalWrite(8,LOW);}
}
