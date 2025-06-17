// TestCase
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    //Best
    fp = fopen("Best.txt", "w");
    for(int i=0; i<100; i++){
        fprintf(fp, "%d \n", i);
    }
    fclose(fp);

    //Worst
    fp = fopen("Worst.txt", "w");
    for(int i=100; i>0; i--){
        fprintf(fp, "%d \n", i);
    }
    fclose(fp);

    //Avg
    fp = fopen("Average.txt", "w");
    for(int i=0; i<100; i++){
        fprintf(fp, "%d \n", rand()%100);
    }
    fclose(fp);
}