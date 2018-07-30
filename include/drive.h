#ifndef DRIVE_H_
#define DRIVE_H_

void setVelocityLY(char leftSpeed);
void setVelocityRY(char rightSpeed);
void setVelocityArm(char armSpeed);
void setVelocityClaw(char clawSpeed);

void doMotorTick();

#endif // DRIVE_H_
