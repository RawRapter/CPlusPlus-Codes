#include<stdio.h>
int main()
{
    int a = 1;
    float b = 2.5;
    double c = 34567.25;
    char d = 'a';
    long e;
    long long f;
    // Finding Quotient and Remainder
    int dividend, divisor, quotient, remainder;
    printf("Input the Dividend: ");
    scanf("%d",&dividend);

    printf("Input the Divisor: ");
    scanf("%d",&divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotient: %d\n",quotient);
    printf("Remainder: %d\n",remainder);

    // Getting size of variable
    printf("a size: %zu bytes\n",sizeof(a));
    printf("b size: %zu bytes\n",sizeof(b));
    printf("c size: %zu bytes\n",sizeof(c));
    printf("d size: %zu bytes\n",sizeof(d));
    printf("e size: %zu bytes\n",sizeof(e));
    printf("f size: %zu bytes\n",sizeof(f));

    // Swap Two Numbers
    int first,second,temp;
    printf("Enter First Number: ");
    scanf("%d",&first);
    printf("Enter Second Number: ");
    scanf("%d",&second);

    printf("Before Swap: First=%d and Second=%d\n",first,second);
    temp = first;
    first = second;
    second = temp;
    printf("After Swap: First=%d and Second=%d\n",first,second);

    return 0;
}