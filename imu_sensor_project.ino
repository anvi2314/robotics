#include "mpu6500.h"
#include <Wire.h>
#include <math.h>

int ax, ay, az;
int roll, pitch;

#define PI 3.14

/* Mpu6500 object */
bfs::Mpu6500 imu;

/* Offset variables */
float roll_offset = 0.0;
float pitch_offset = 0.0;

void setup() {
  Serial.begin(9600);
  while (!Serial) {}
  Wire.begin();
  Wire.setClock(400000);
  
  imu.Config(&Wire, bfs::Mpu6500::I2C_ADDR_PRIM);

  if (!imu.Begin()) {
    Serial.println("Error initializing communication with IMU");
    while (1) {}
  }

  if (!imu.ConfigSrd(19)) {
    Serial.println("Error configuring SRD");
    while (1) {}
  }

  delay(500);
  if (imu.Read()) {
    ax = imu.accel_x_mps2();
    ay = imu.accel_y_mps2();
    az = imu.accel_z_mps2();

    pitch_offset = atan2(-ax, sqrt(ay * ay + az * az)) * 180.0 / PI;
    roll_offset  = atan2(ay, az) * 180.0 / PI;
  }
}

void loop() {
  if (imu.Read()) {
    ax = imu.accel_x_mps2();
    ay = imu.accel_y_mps2();
    az = imu.accel_z_mps2();

    pitch = atan2(-ax, sqrt(ay * ay + az * az)) * 180.0 / PI;
    roll  = atan2(ay, az) * 180.0 / PI;

    pitch -= pitch_offset;
    roll  -= roll_offset;

    Serial.print("Pitch: ");
    Serial.print(pitch);
    Serial.print("\tRoll: ");
    Serial.println(roll);

    // Trigger responses
    if (roll > 60 && roll < 90) {
      Serial.println("I am hungry");
    }
    

    if (roll > 100) {
      Serial.println("I am thirsty");
    }

    if (pitch > 0 && pitch < -90 && pitch > - 120) {
      Serial.println("I am tired");
    }
    
  }

  delay(1000);
}
