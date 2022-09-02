#include <stdio.h>

int main() {
    int a, b;
    a = 10;
    b = 3;
    printf("a + b = %d \n", a + b);
    printf("a - b = %d \n", a - b);
    printf("a * b = %d \n", a * b);
    printf("a / b = %d \n", a / b);
    printf("a %% b = %d \n", a % b);

    // 정수형 연산은 언제나 정스로 유지된다.
    // 아래연산을 실행하면 이상한 결과가 나온다.
    printf("a / b = %f \n", a / b); // 해서는 안될 짓

    int c;
    double d;
    c = 10;
    d = 3;
    // 어떤한 자료형이 다른 두 변수를 연산 할 때, 숫자의 범위가 큰 자료형으로 자료형이 바뀐다.
    printf("c / d = %f \n", c / d);
    printf("d / c = %f \n", d / c);
    return 0;
}