#include <stdio.h>

int main(){
    int length, breadth, area;
    printf("Enter Length: \n");
    scanf("%d", &length);
    printf("Enter Breadth: \n");
    scanf("%d", &breadth);

    area = length * breadth;

    printf("Area : %d \n", area);




    return 0;
}