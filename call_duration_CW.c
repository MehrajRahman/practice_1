#include <stdio.h>
#include <math.h>

int main (){
    int sec, bill, bill_in_taka, bill_in_paisa;
    float vat ; 
    scanf("%d", &sec);
    bill = ceil(sec/10.0)*15;
    // Convertion in taka
    bill_in_taka = bill/100;
    bill_in_paisa = bill % 100;


// Assumed that 15% vat
    vat = bill * 1.15;

    printf("%d taka %d paisa ", bill_in_taka , bill_in_paisa);
    return 0;

}