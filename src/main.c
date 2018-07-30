#include "main.h"
#include "constants.h"
#include "drive.h"

void initializeIO() {
}

void initialize() {
}

void autonomous() {
}


void operatorControl() {
	while (1) {
		setVelocityLY(joystickGetAnalog(LY));
		setVelocityRY(joystickGetAnalog(RY));

		setVelocityArm((joystickGetDigital(ARM_UP) - joystickGetDigital(ARM_DOWN)) * BUTTON_MOTOR_SPEED);
		setVelocityClaw((joystickGetDigital(CLAW_OPEN) - joystickGetDigital(CLAW_CLOSE)) * BUTTON_MOTOR_SPEED);

		doMotorTick();
		delay(20);
	}
}
