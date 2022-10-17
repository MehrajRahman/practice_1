#include <stdio.h>

int main(){
    float km_value, meters, feets, inches, centimeters;
    scanf("%f", &km_value);

    meters = km_value * 1000;

    feets = meters * 3.28084;
    
    inches = feets * 12;

    centimeters = inches * 2.54;


    printf("Meters : %f \n", meters);
    printf("Feets : %f \n", feets);
    printf("Inches : %f \n", inches);
    printf("Centimeters : %f \n", centimeters);


    return 0;




}