#include <stdio.h>
#include <stdint.h>
int main(void) {
    int a, a4;
    uint8_t a1;
    float a3; 
    uint16_t checksum;
    scanf("%x %o %f", &a, &a4, &a3); 
    a1 = a4;
    checksum = a + a1;
    printf("PACKET_ID: %d\n", a);
    printf("STATUS_CODE: %d\n", a1);
    printf("STATUS_CHAR: %c\n", a1);
    printf("VOLTAGE: %.2f\n", a3);
    printf("CHECKSUM: %u\n", checksum);
    return 0;
}