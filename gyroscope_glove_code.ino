#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
#include <Wire.h>
const int MPU = 0x68; // MPU-6050 I2C address

float AccX, AccY, AccZ; // Accelerometer values
float GyroX, GyroY, GyroZ; // Gyroscope values

void setup() {
lcd.init();
lcd.backlight();
Wire.begin();
Serial.begin(9600);

// Initialize MPU-6050
Wire.beginTransmission(MPU);
Wire.write(0x6B); // Power management register
Wire.write(0); // Wake up MPU-6050
Wire.endTransmission(true);
}

void loop() {
Wire.beginTransmission(MPU);
Wire.write(0x3B); // Starting register for accelerometer data
Wire.endTransmission(false);
Wire.requestFrom(MPU, 14, true); // Request 14 bytes of data

// Read accelerometer data
AccX = (Wire.read() << 8 | Wire.read()) / 16384.0;
AccY = (Wire.read() << 8 | Wire.read()) / 16384.0;
AccZ = (Wire.read() << 8 | Wire.read()) / 16384.0;

// Read gyroscope data
GyroX = (Wire.read() << 8 | Wire.read()) / 131.0;
GyroY = (Wire.read() << 8 | Wire.read()) / 131.0;
GyroZ = (Wire.read() << 8 | Wire.read()) / 131.0;

// Print data to Serial Monitor
Serial.print("AccX: "); Serial.print(AccX);
/*
Serial.print(" | AccY: "); Serial.print(AccY);
Serial.print(" | AccZ: "); Serial.print(AccZ);
Serial.print(" | GyroX: "); Serial.print(GyroX);
Serial.print(" | GyroY: "); Serial.print(GyroY);
Serial.print(" | GyroZ: "); Serial.println(GyroZ);
*/

lcd.setCursor(0,0);
lcd.print("testing");

if( AccX > 0.10 && AccX < 0.15 )
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("I am hungry");
}


else if(AccX < 0.01 && AccX <= -0.20 )
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("I am thirsty");
}

else
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("REST");
}


delay(500); // Delay for readability
}
