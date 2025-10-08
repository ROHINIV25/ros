void timer_cb(){

    count_response.id = COUNTER;

    // data to send
    count_response.a ++;
    count_response.b ++;

    // send the message 
    send_data(pack_data<Counter>(count_response));
    send_data(pack_data<Pwm>(motor_pwm));
    

}

BlitzTimer t1(timer_cb, 100);
