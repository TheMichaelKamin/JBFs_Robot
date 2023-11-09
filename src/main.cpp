/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Michael                                          */
/*    Created:      Fri Nov 03 2023                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Drivetrain           drivetrain    1, 2, 10, 9     
// Motor8               motor         8               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"


using namespace vex;



int main() {
  //Blue right side (right from blue perspective)
  Drivetrain.setDriveVelocity(75, rpm);
  Drivetrain.driveFor(forward, 10, inches);
  Drivetrain.turnFor(left, 45, degrees);
  Drivetrain.driveFor(forward, 24, inches);
  Drivetrain.turnFor(right, 20, degrees);
  Drivetrain.setDriveVelocity(200, rpm);
  Drivetrain.driveFor(forward, 12, inches);

  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
}

