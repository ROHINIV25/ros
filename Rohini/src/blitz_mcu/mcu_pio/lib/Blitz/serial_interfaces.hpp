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
    uint8_t id;
    float vx;
    float vy;
    float theta;

};  
#pragma pack(pop)
#pragma pack(push, 1)
struct Pwm {
    uint8_t id;
    int32_t m1;
    int32_t m2;
    int32_t m3;
    int32_t m4;

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
