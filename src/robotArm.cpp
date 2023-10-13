#include "robotArm.h"

class robotArm {

void moveArm(float theta) {

  if (theta > 0) { 

  moveBarMotor.spinFor(forward, theta, degrees);

  }

  if (theta < 0) {
    moveBarMotor.spinFor(reverse, theta, degrees);
  }

}

void reset() {

  moveBarMotor.setPosition(0, degrees);

}

void spinArmWheels(float theta) {

  spinWheelsMotor.spinFor(forward, theta, degrees);

}

void motorStop() {
  moveBarMotor.stop();
  spinWheelsMotor.stop();
}

};