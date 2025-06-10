// powerofnumber

#include<stdio.h>

int main(){
    int base, exponent;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    int result = 1;
    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    printf("%d^%d is: %d", base, exponent, result);
    return 0;
    
}

