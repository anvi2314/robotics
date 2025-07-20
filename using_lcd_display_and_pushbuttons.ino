int a;
int b;
int c;
int d;
LiquidCrystal_I2C lcd(0x26, 16, 2);

void setup()
{
  pinMode(3,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
  Serial.begin(9600);
  lcd.init();					#include <LiquidCrystal_I2C.h>

  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("TALKING GLOVE");
}
void loop()
{
 a=digitalRead(3);
 b=digitalRead(4);
 c=digitalRead(5);
 d=digitalRead(6);
  
 if(a==HIGH)
 {
   lcd.print("I AM THIRSTY");
   delay(1000);
   lcd.clear();
 }
 
