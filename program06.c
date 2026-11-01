#include <stdio.h>

int main()
{
    int a, b, c, total;
    float average;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &a, &b, &c);

    total = a + b + c;
    average = total / 3.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", average);

    if(a < 35 || b < 35 || c < 35)
        printf("Result = Fail");
    else if(average >= 70)
        printf("Grade = Distinction");
    else if(average >= 60)
        printf("Grade = First Class");
    else if(average >= 50)
        printf("Grade = Second Class");
    else if(average >= 35)
        printf("Grade = Third Class");
    else
        printf("Result = Fail");

    return 0;
}
