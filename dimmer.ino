int led1= A0;
int i=0;
void setup()
{
  pinMode(led1,OUTPUT);
}
void loop()
{
  for( i=0; i<=255; i++)
  {
    analogWrite(led1,i);
    delay(10);
  }
}
