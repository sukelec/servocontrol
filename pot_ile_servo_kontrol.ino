/*Pot ile Servo kontrol uygulaması
  Şükrü COŞAR  
*/
#include <Servo.h>  // Servo kütüphanesini dahil ediyoruz.
const int pot=A0;   // Potumuzu bağlayacağımız analog giriş.
Servo myservo;      // Bu komutla servo kontrol nesnenizi oluşuyorsunuz.
int potdurum=0;     
int pos = 0;       

void setup() 
{
  myservo.attach(9); // Servonuz sinyal girişine bağlayacağımız ArduinoUno pini(PWM Pindir.)
} 

void loop()
{
  potdurum=analogRead(pot);
  pos= map(potdurum,0,1023,0,180);//Servolar 180 derece açı yaparlar pottan okunan değeri 180e oranlıyoruz.
{ 
  myservo.write(pos); // yukarıda ki oranladığımız değeri servoya yazdırıyoruz.
}
}
