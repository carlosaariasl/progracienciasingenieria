int LED1 = 1;
int LED2 = 7;
int POT = 0;
int BRILLO;
int pinTMP = 5;
float temperatura;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED1,HIGH);
  delay(500);
  digitalWrite(LED1,LOW);
  delay(500);
  BRILLO = analogRead(0)/4;
  analogWrite(LED2,BRILLO);
  //Serial.println(BRILLO);
  temperatura = (analogRead(pinTMP)/4);
  Serial.println(temperatura);
}

