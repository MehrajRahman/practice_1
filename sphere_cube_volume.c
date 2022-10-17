#include <stdio.h>

int main (){
    int radius, length;

    float volume_sphere, volume_cube;
    scanf("%d %d", &radius, &length);

    volume_sphere = (4 * 3.1416 * radius*radius*radius)/3;

    volume_cube = length * length * length;

    printf("Sphere Volume: %.2f", volume_sphere);
    printf("Cube volume: %.2f", volume_cube);

    return 0;


}