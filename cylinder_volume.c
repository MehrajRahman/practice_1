#include <stdio.h>

int main(){
    int radius, height;
    double volume;
    scanf("%d %d", &radius, &height);
    volume = 3.1416 * radius * radius * height;

    printf("Volume : %.2lf", volume);

    return 0;
}