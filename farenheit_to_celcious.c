#include <stdio.h>

int main(){
    float farenheit, celcious;

    scanf("%f", &celcious);
    farenheit  =  (celcious*9/5)+32;

    printf("%.2f", farenheit);

    return 0;
}