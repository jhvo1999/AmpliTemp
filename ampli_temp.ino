int pin=A0;
float temperaturad;
float temperatura;

void setup() {
  Serial.begin(9600);
}

void loop() {
  temperaturad=analogRead(pin);
  temperatura=(72*temperaturad)/1023.00;
  Serial.println("LA TEMPERATURA MARCA : " );
  Serial.println(temperatura);
  delay(1000);
  

}
