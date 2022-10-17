#include <stdio.h>

int main(){

    int a, b, c,d;
    float result;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    result = (a-b)/(float)(c-d);

    printf("%.2f", result);
    return 0;


}