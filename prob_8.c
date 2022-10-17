#include <stdio.h>
int main(){
    int min, hour, rmin;
    scanf("%d", &min);

    hour = min / 60;
    rmin = min%60;

    printf("%d hours %d minutes", hour , rmin);

    

    return 0;
}