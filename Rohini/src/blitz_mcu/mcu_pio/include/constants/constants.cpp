// this file contains all your global variables
// must contain constants which store data coming from the computer
// declared as a global variable 
Counter count;
Counter count_response;
Pwm motor_pwm;
Speed speed;
struct MotorVelocities {
  int v1;  // Motor 1 velocity
  int v2;  // Motor 2 velocity
  int v3;  // Motor 3 velocity
  int v4;  // Motor 4 velocity
};
MotorVelocities motor_speeds;
