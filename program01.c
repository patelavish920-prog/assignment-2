#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
    {
        printf("Largest = %d\n", a);
        printf("Smallest = %d", b);
    }
    else
    {
        printf("Largest = %d\n", b);
        printf("Smallest = %d", a);
    }

    return 0;
}
