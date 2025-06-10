// countdigitRecursion
#include<stdio.h>

int countdigitRecursion(int n){
    if(n==0) return 0;
    else return 1 + countdigitRecursion(n/10);
}

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Number of digits: %d",countdigitRecursion(n));
    return 0;
}