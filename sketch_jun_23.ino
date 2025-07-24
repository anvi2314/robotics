#include <Wire.h>
#include "mpu6500.h"

bfs::Mpu6500 imu;

void setup() {
  Serial.begin(115200);
  Wire.begin();

  // Configure with I2C and primary address (0x68)
  imu.Config(&Wire, bfs::Mpu6500::I2C_ADDR_PRIM);
  imu.Begin();  // Initialize the IMU

  Serial.println("MPU-6500 initialized.");
}

void loop() {
  imu.Read();  // Read sensor data

  // Call gyro accessors correctly as functions
  float gx = imu.gyro_x_radps();
  float gy = imu.gyro_y_radps();
  float gz = imu.gyro_z_radps();

  Serial.print("Gyroscope [rad/s] - X: ");
  Serial.print(gx, 4);
  
}
