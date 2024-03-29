#ifndef _MPU6050_H
#define _MPU6050_H

/* registermap from
 https://store.invensense.com/Datasheets/invensense/RM-MPU-6000A.pdf
 */

#define MPU6050_ADDRESS 0x68
#define MPU6050_PWRMNGR_1 0x6b
#define MPU6050_AX 0x3b
#define MPU6050_AY 0x3d
#define MPU6050_AZ 0x3f
#define MPU6050_GX 0x43
#define MPU6050_GY 0x45
#define MPU6050_GZ 0x47
#define MPU6050_TMP 0x41

#define MPU6050_ACC_SCALE(x) (x / 16384.0)
#define MPU6050_GYRO_SCALE(x) (x / 131.0)
#define MPU6050_TEMP_SCALE(x) ((x / 340.0) + 36.53)

int mpu6050Setup();
float mpu6050GetAx();
float mpu6050GetAy();
float mpu6050GetAz();
float mpu6050GetGx();
float mpu6050GetGy();
float mpu6050GetGz();
float mpu6050GetTmp();
#endif
