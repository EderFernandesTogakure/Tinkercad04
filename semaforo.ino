int ledVermelho = 12;
int ledAmarelo = 8;
int ledVerde = 4;

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop()
{
  digitalWrite(ledVerde, HIGH);
  delay(5000); 
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, HIGH);
  delay(3000);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, HIGH);
  delay(7000);
  digitalWrite(ledVermelho, LOW);
}