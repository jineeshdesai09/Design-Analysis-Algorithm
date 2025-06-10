// sumofnumbersRecursion
#include<stdio.h>

int sum(int n){
    if(n==1) return 1;
    
    return n + sum(n-1);
}

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Sum of numbers from 1 to %d is: %d", n, sum(n));
    return 0;
}

