/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Wed Sep 25 2019                                           */
/*    Description:  Tank Drive                                                */
/*    This sample allows you to control the V5 Clawbot using the both         */
/*    joystick. Adjust the deadband value for more accurate movements.        */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller
// LeftMotor            motor         1
// RightMotor           motor         10
// ClawMotor            motor         3
// ArmMotor             motor         8
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "myVision.h"

using namespace vex;

  const int CENTER_FOV =158;
  const int OFFSET_X = 15;
int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();



  vexcodeInit();
  
  while(true){
    Brain.Screen.clearLine();
    Vision1.takeSnapshot(BLUE_2);
    if(Vision1.largestObject.exists){
      Brain.Screen.print(Vision1.largestObject.width);
      if(Vision1.largestObject.width < 50){
        RightMotor.spin(reverse);
        LeftMotor.spin(reverse);
      }
      else if(Vision1.largestObject.centerX > CENTER_FOV + OFFSET_X){
        RightMotor.spin(reverse);
        LeftMotor.spin(forward);
      }
      else if (Vision1.largestObject.centerX < CENTER_FOV - OFFSET_X) {
        RightMotor.spin(forward);
        LeftMotor.spin(reverse);
      }
      else{
        RightMotor.stop(brakeType::brake);
        LeftMotor.stop(brakeType::brake);
      }
  }
  
  }
}
