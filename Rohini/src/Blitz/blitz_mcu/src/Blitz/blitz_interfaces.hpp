enum PacketID : uint8_t {
    COUNTER = 1,
    COUNTER_RESPONSE = 2,
    SPEED=4
    PWM=
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

size_t get_packet_size(uint8_t id) {
    switch (id) {
        case COUNTER:    return sizeof(Counter);
        case COUNTER_RESPONSE:    return sizeof(Counter);
        case SPEED:    return sizeof(Speed)
        default:      return 0; // unknown
    }
}
