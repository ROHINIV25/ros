void timer_cb(){

    count_response.id = COUNTER;
    motor_speeds.id=PWM;
    // data to send
    count_response.a ++;
    count_response.b ++;
    // motor_pwm.m1=motor_speeds.m1;
    // motor_pwm.m2=motor_speeds.m2;
    // motor_pwm.m3=motor_speeds.m3;
    // motor_pwm.m4=motor_speeds.m4;


    // send the message 
    send_data(pack_data<Pwm>(motor_speeds));
    

}

BlitzTimer t1(timer_cb, 100);
