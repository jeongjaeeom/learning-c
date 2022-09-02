#include <stdio.h>

int main() {
    int a = 0xAF;   // 10101111
    int b = 0xB5;   // 10110101

    // int는 4바이트이기 때문에 사실 32비트를 사용한다.
    // 즉 a = 1 > 00000000 00000000 00000000 00000001 이다.

    printf("%x \n", a & b);     // 10100101
    printf("%x \n", a | b);     // 10111111
    printf("%x \n", a ^ b);     // 00011010
    printf("%x \n", ~a);        // 01010000
    printf("%x \n", a << 2);    // 10111100
    printf("%x \n", b >> 3);    // 00010110
    return 0;
}