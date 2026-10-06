#include <stdio.h>
#include <stdint.h>
int main(void) {
    uint8_t num, add, mul2, sqr;
    scanf("%hhu", &num);
    add = num + num;
    mul2 = num * 2;
    sqr = num * num;
    printf("ADD: %u\n", (unsigned int)add);
    printf("MUL2: %u\n", (unsigned int)mul2);
    printf("SQR: %u\n", (unsigned int)sqr);
    return 0;
}