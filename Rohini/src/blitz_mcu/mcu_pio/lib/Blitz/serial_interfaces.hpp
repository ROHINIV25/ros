enum PacketID : uint8_t {
    COUNTER_RESPONSE = 1,
    COUNTER = 2,
    SPEED = 4,
    PWM = 5    
};

#pragma pack(push, 1)
struct Counter {
    uint8_t id;
    int16_t a;
    int16_t b;
    float c;
    float d;

};  
#pragma pack(pop)
#pragma pack(push, 1)
struct Speed {
    
    float vx;
    float vy;
    float vtheta;

};  
#pragma pack(pop)
#pragma pack(push, 1)
struct Pwm {
    int32 m1;
    int32 m2;
    int32 m3;
    int32 m4;

};  
#pragma pack(pop)

size_t get_packet_size(uint8_t id) {
    switch (id) {
        case COUNTER:    return sizeof(Counter);
        case COUNTER_RESPONSE:    return sizeof(Counter);
        case SPEED: return sizeof(Speed);
        case PWM: return sizeof(Pwm);
        default:      return 0; // unknown
    }
}
