int pin5 = 5;
int pin6 = 6;
int pin7 = 7;
int pin8 = 8;
int pin9 = 9;
int pin10 = 10;
int pin11 = 11,
int pin12 = 12;
int espera = 70; // El tiempo que se esperara
void setup(){
pinMode(pin5, OUTPUT); // Configuración de los PIN como salida
pinMode(pin6, OUTPUT);
pinMode(pin7, OUTPUT);
pinMode(pin8, OUTPUT);
pinMode(pin9, OUTPUT);
pinMode(pin10, OUTPUT);
pinMode(pin11, OUTPUT);
pinMode(pin12, OUTPUT);
}
void loop() {
digitalWrite(pin5, HIGH); // Enciende y apaga secuencialmente los LEDs
delay(espera);
digitalWrite(pin5, LOW);
delay(espera);
digitalWrite(pin6, HIGH);
delay(espera);
digitalWrite(pin6, LOW);
delay(espera);
digitalWrite(pin7, HIGH);
delay(espera);
digitalWrite(pin7, LOW);
delay(espera);
digitalWrite(pin8, HIGH);
delay(espera);
digitalWrite(pin8, LOW);
delay(espera);
digitalWrite(pin9, HIGH);
delay(espera);
digitalWrite(pin9, LOW);
delay(espera);
digitalWrite(pin10, HIGH);
delay(espera);
digitalWrite(pin10, LOW);
delay(espera);
digitalWrite(pin11, HIGH);
delay(espera);
digitalWrite(pin11, LOW);
delay(espera);
digitalWrite(pin12, HIGH);
delay(espera);
digitalWrite(pin12, LOW);
delay(espera);
digitalWrite(pin11, HIGH);
delay(espera);
digitalWrite(pin11, LOW);
delay(espera);
digitalWrite(pin10, HIGH);
delay(espera);
digitalWrite(pin10, LOW);
delay(espera);
digitalWrite(pin9, HIGH);
delay(espera);
digitalWrite(pin9, LOW);
delay(espera);
digitalWrite(pin8, HIGH);
delay(espera);
digitalWrite(pin8, LOW);
delay(espera);
digitalWrite(pin7, HIGH);
delay(espera);
digitalWrite(pin7, LOW);
delay(espera);
digitalWrite(pin6, HIGH);
delay(espera);
digitalWrite(pin6, LOW);
delay(espera);
digitalWrite(pin5, HIGH);
delay(espera);
digitalWrite(pin5, LOW);
delay(espera);
}
