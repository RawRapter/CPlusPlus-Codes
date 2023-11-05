#include<stdio.h>
int main()
{
    int a;
    int b,c,d;
    float e,f,g;
    char h;
    
    printf("Hello World\n");

    // Read and Write an Integer
    printf("Enter an Integer: ");
    scanf("%d",&a);
    printf("Entered Integer is: %d\n",a);

    // Adding two Integer
    printf("Enter two integers to be added:\n");
    printf("First Integer: ");
    scanf("%d",&b);

    printf("Second Integer: ");
    scanf("%d",&c);

    d = b+c;
    printf("%d + %d = %d\n",b,c,d);

    // Multiply Two Floating Point Numbers
    printf("Enter two Float numbers to be added:\n");
    printf("First Number: ");
    scanf("%f",&e);

    printf("Second Number: ");
    scanf("%f",&f);

    g = e*f;
    printf("%.2f * %.2f = %.2f\n",e,f,g);


    // ASCII Value of Characters
    printf("Enter a Character: ");
    scanf("%c",&h);
    printf("ASCII Value of Character %c is %d",h,h);
    return 0;
}