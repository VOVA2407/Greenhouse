
//Тестировалось на Arduino IDE 1.0.1
// Подключаем enable l293d слева к pwm выводу 9.
// выводы input1 и input2 подключаем к выводам 7 и 8
// 
int IN1 = 8; //input1 подключен к выводу 8 
int IN2 = 7;
int EN1 = 9;
void setup()
{
 pinMode (EN1, OUTPUT);
 pinMode (IN1, OUTPUT);
 pinMode (IN2, OUTPUT);
}
void loop()
{
  digitalWrite (IN2, HIGH);
  digitalWrite (IN1, LOW); 
  analogWrite(EN1,55);
  delay(2000);
  analogWrite(EN1,105);
  delay(2000);
  analogWrite(EN1,255);
  delay(2000);
  analogWrite(EN1,0);
  delay(5000);
}
