#include <stdio.h>
int main() {
    int hour , minute ,movie_in_minutes;
    float  movie_in_fract_hour;
    printf("Enter Hour Of your watched movie : \n ");
    scanf("%d", &hour);
     printf("Enter Minutes Of your watched movie : \n ");
    scanf("%d", &minute);


    movie_in_minutes  = hour *60 + minute;
    movie_in_fract_hour = hour + minute/60.0;

    printf("In  minute : %d minutes and in hour : %.2f hours", movie_in_minutes, movie_in_fract_hour );



    return 0;
}