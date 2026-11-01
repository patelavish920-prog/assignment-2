#include <stdio.h>

int main()
{
    float gross, allowance, deduction, net;

    printf("Enter gross salary: ");
    scanf("%f", &gross);

    if(gross > 10000)
    {
        allowance = gross * 10 / 100;
        deduction = gross * 3 / 100;
    }
    else if(gross > 5000)
    {
        allowance = gross * 7 / 100;
        deduction = gross * 2 / 100;
    }
    else
    {
        allowance = 0;
        deduction = 0;
    }

    net = gross + allowance - deduction;

    printf("Net Salary = %.2f", net);

    return 0;
}
