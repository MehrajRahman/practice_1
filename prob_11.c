#include <stdio.h>

int main(){
    int days, years, rmonths, rweeks,rdays ;
    printf("Enter Days : \n");
    scanf("%d",&days );

    years = days / 365;
    rmonths = (days % 365)/30;
    rweeks = ((days % 365)%30)/7;
    rdays = ((days % 365)%30)%7;

    printf("%d years %d months %d weeks %d days", years, rmonths, rweeks, rdays);
    


    return 0;
}