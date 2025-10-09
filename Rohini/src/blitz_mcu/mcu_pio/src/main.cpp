#include "include_all.cpp"

//Top-Left Wheel
#define MOTOR1_PWM_PIN  19  
#define MOTOR1_DIR_PIN  20  

//Top-Right Wheel
#define MOTOR2_PWM_PIN  7
#define MOTOR2_DIR_PIN  9

//Bottom-Left Wheel
#define MOTOR3_PWM_PIN  2
#define MOTOR3_DIR_PIN  1

//Bottom-Right Wheel
#define MOTOR4_PWM_PIN  14
#define MOTOR4_DIR_PIN  12


//Move this nigga to the creating struct which is ig constants part
int sign_matrix[4][3] = {
  {1, 1, 1},   // Motor 1 (Top-Left)
  {1, -1, -1},  // Motor 2 (Top-Right)
  {1, 1, -1}, // Motor 3 (Bottom-Left)
  {1, -1, 1}   // Motor 4 (Bottom-Right)
};



void setup(){

    pinMode(MOTOR1_DIR_PIN, OUTPUT);
    pinMode(MOTOR2_PWM_PIN, OUTPUT);
    pinMode(MOTOR2_DIR_PIN, OUTPUT);
    pinMode(MOTOR3_PWM_PIN, OUTPUT);
    pinMode(MOTOR3_DIR_PIN, OUTPUT);
    pinMode(MOTOR4_PWM_PIN, OUTPUT);
    pinMode(MOTOR4_DIR_PIN, OUTPUT);
    
    Serial.begin(9600);
    Serial.println("Omni-Directional Robot Started...");

}   
Pwm calculateMotorVelocities(int pwm_vx, int pwm_vy, int pwm_w) {
    Pwm motors;
      
     // Create velocity vector [vx, vy, w]
  //   int velocity_vector[3][1] = {
  //       {pwm_vx},
  //       {pwm_vy},
  //       {pwm_w}
  //   };
  
  //   // Result matrix for motor velocities
  //   int motor_velocity_matrix[4][1];
  
  // // Matrix multiplication: motor_velocity_matrix = sign_matrix × velocity_vector
  //   for (int i = 0; i < 4; i++) {
  //       motor_velocity_matrix[i][0] = 0;
  //       for (int j = 0; j < 3; j++) {
  //       motor_velocity_matrix[i][0] += sign_matrix[i][j] * velocity_vector[j][0];
  //       }
  //   }
  
  // // Store calculated velocities in struct
  //   motors.m1 = motor_velocity_matrix[0][0];
  //   motors.m2 = motor_velocity_matrix[1][0];
  //   motors.m3 = motor_velocity_matrix[2][0];
  //   motors.m4 = motor_velocity_matrix[3][0];
  
    motors.m1 = pwm_vx;
    motors.m2 = pwm_vy;
    motors.m3 = pwm_w;
    return motors;
    }


// Function to set motor speeds and directions
void setMotorSpeeds(int v1, int v2, int v3, int v4) {
  // Motor 1
  if (v1 < 0) {
    digitalWrite(MOTOR1_DIR_PIN, LOW);
    analogWrite(MOTOR1_PWM_PIN, abs(v1));
  } else if (v1 > 0) {
    digitalWrite(MOTOR1_DIR_PIN, HIGH);
    analogWrite(MOTOR1_PWM_PIN, v1);
  } else {
    analogWrite(MOTOR1_PWM_PIN, 0);
  }
  
  // Motor 2
  if (v2 < 0) {
    digitalWrite(MOTOR2_DIR_PIN, LOW);
    analogWrite(MOTOR2_PWM_PIN, abs(v2));
  } else if (v2 > 0) {
    digitalWrite(MOTOR2_DIR_PIN, HIGH);
    analogWrite(MOTOR2_PWM_PIN, v2);
  } else {
    analogWrite(MOTOR2_PWM_PIN, 0);
  }
  
  // Motor 3
  if (v3 < 0) {
    digitalWrite(MOTOR3_DIR_PIN, LOW);
    analogWrite(MOTOR3_PWM_PIN, abs(v3));
  } else if (v3 > 0) {
    digitalWrite(MOTOR3_DIR_PIN, HIGH);
    analogWrite(MOTOR3_PWM_PIN, v3);
  } else {
    analogWrite(MOTOR3_PWM_PIN, 0);
  }
  
  // Motor 4
  if (v4 < 0) {
    digitalWrite(MOTOR4_DIR_PIN, LOW);
    analogWrite(MOTOR4_PWM_PIN, abs(v4));
  } else if (v4 > 0) {
    digitalWrite(MOTOR4_DIR_PIN, HIGH);
    analogWrite(MOTOR4_PWM_PIN, v4);
  } else {
    analogWrite(MOTOR4_PWM_PIN, 0);
  }
}

void loop() {

    // recieves data in every loop 
    std::vector<uint8_t> payload = receive_data();
    
    
    store_data(payload);
    
    float target_vx1 = speed.vx;
    float target_vy1 = speed.vy;
    float target_w1 = speed.theta;

    // float target_vx = map(target_vx1, -1.0, 1.0, -5.0, 5.0);
    // float target_vy = map(target_vy1, -1.0, 1.0, -5.0, 5.0);
    // float target_w = map(target_w1, -1.0, 1.0, -5.0, 5.0);    float target_vx = map(target_vx1, -1.0, 1.0, -5.0, 5.0);
    // float target_vy = map(target_vy1, -1.0, 1.0, -5.0, 5.0);
    // float target_w = map(target_w1, -1.0, 1.0, -5.0, 5.0);

    // //In the above nigga receive data from custom interface and store the data

    // //Scaling:
    // float vx_scaled = map(target_vx*100, -500, 500, -255, 255);
    // float vy_scaled = map(target_vy*100, -500, 500, -255, 255);
    // float w_scaled = map(target_w*100, -500, 500, -255, 255);
float vx_scaled=target_vx1*255.0;
float vy_scaled=target_vy1*255.0;
float w_scaled=target_w1*255.0;

    //In the above nigga receive data from custom interface and store the data

    // //Scaling:
    // float vx_scaled = map(target_vx*100, -500, 500, -255, 255);
    // float vy_scaled = map(target_vy*100, -500, 500, -255, 255);
    // float w_scaled = map(target_w*100, -500, 500, -255, 255);
    

    //Defining this uhh uhhh data type
    // Pwm motor_speeds;

    //The below nigga needs pwm as parameters
    motor_speeds = calculateMotorVelocities((int)vx_scaled, (int)vy_scaled, (int)w_scaled);
    setMotorSpeeds(motor_speeds.m1, motor_speeds.m2, motor_speeds.m3, motor_speeds.m4);
    delay(10);
    t1.spin();
    
}

    