#include <stdio.h>

int main(){
    int a, square, cube;
    scanf("%d", &a);

    square = a*a;
    cube = a*a*a;

    printf("Square: %d \n", a);
    printf("Cube: %d \n", cube);


    return 0;
}