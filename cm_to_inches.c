#include <stdio.h>

int main () {
    int cm;
    float inches;

    scanf("%d", &cm);
    inches = cm / 2.54;

    printf(" Inches : %.2f", inches);

    return 0;

}
