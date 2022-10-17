#include <stdio.h>

int main () {
    int sub1, sub2, sub3, sub4, sub5 , total_marks;
    float average_marks;
    printf("Subject 1 marks: \n");
    scanf("%d", &sub1);
     printf("Subject 2 marks: \n");
    scanf("%d", &sub2);
     printf("Subject 3 marks: \n");
    scanf("%d", &sub3);
     printf("Subject 4 marks: \n");
    scanf("%d", &sub4);
     printf("Subject 5 marks: \n");
    scanf("%d", &sub5);

    total_marks = sub1 + sub2 + sub3 + sub4+ sub5;

    average_marks = total_marks / 5.0;

    printf("Total Marks : %.d, Average Marks : %.2f", total_marks, average_marks);

    return 0;
}