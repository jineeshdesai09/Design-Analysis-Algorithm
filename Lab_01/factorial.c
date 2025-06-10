#include<stdio.h>

int main(){
    int n;
    int fact =1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        fact *= (i + 1);
        
    }
    printf("%d",fact);
    
    return 0;
}