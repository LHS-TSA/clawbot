#include "main.h"
#include "drive.h"
#include "constants.h"

char leftVelocity, rightVelocity, clawVelocity, armVelocity;

void setVelocityLY(char leftSpeed) {
  leftVelocity = leftSpeed;
}

void setVelocityRY(char rightSpeed) {
  rightVelocity = -rightSpeed;
}

void setVelocityClaw(char clawSpeed) {
	clawVelocity = clawSpeed;
}

void setVelocityArm(char armSpeed) {
	armVelocity = -armSpeed;
}

void doMotorTick() {
  motorSet(LEFT_DRIVE, leftVelocity);
  motorSet(RIGHT_DRIVE, rightVelocity);
	motorSet(CLAW_MOTOR, clawVelocity);
	motorSet(ARM_MOTOR, armVelocity);
}
