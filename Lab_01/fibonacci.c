// fibonacci

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a = 0, b = 1, next;
    // printf("%d %d", a, b);
    for (int i = a; i < n ; i++){
        next = a + b;
        a = b;
    }
    printf("Fibonacci is %d", next);
    return 0;
}