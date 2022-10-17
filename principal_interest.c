#include <stdio.h>
int main(){
    int principal, time;
    float rate, interest; 
    scanf("%d %d %f", &principal, &time, &rate);

    interest = principal * time *rate;

    printf("%.2f", interest);



    return 0;
}