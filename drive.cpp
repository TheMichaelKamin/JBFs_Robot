#include "drive.h"
using namespace std;
using namespace vex;

//This class is a collection of the functions for convinience for interacting with the drive train.
class Drive {

void setRobotSpeed(double speed) {

  vex::drivetrain::setDriveVelocity(speed, 0.5);

}

//This first method makes the robot drive forward an x distance
//{float} distance - this is the distance travelled in inches.
//the distance is a float because it allows more flexiblity in the movement than an integer would
void driveRobotForward(float distance) {

  Drivetrain.driveFor(forward, distance, vex::in);

}

//This method defines how much the robot would turn in a given circumstance
//{float} theta - This is the degree that the robot is going to turn when it's told to
//The degree is a float because it allows more flexibility in the turning than an integer would
//degrees have been chosen as the unit for turning for the ease of them
void driveRobotTurn(float theta) {

  //if the degree is positive, then the robot will turn to the RIGHT theta degrees
  if (theta > 0) {

    vex::drivetrain.turnFor(right, theta, degrees, false);

  }
  //if the degree is negative, then the robot will turn to the RIGHT theta degrees
  if (theta < 0) {

    vex::drivetrain.turnFor(left, theta, degrees, false);

  }

}

//This method causes the drive train to stop completely
//There may be certain dangers if this is used while the robot is travelling at high speeds
void driveRobotAllStop() {

  vex::drivetrain.stop();

}


};
