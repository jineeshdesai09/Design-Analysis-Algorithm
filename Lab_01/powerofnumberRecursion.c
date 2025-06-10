// powerofnumberRecursion

#include <stdio.h>

int powerOfNumber(int base, int exponent) {
    if (exponent == 0) return 1;

    return base * powerOfNumber(base, exponent - 1);
}

int main(){

    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    printf("%d^%d is %d",base, exponent,powerOfNumber(base, exponent));

    return 0;
}