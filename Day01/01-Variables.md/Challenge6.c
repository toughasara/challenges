#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    float s, p, v, f;
    printf("veuillez entrer la valeure de a : ");
    scanf("%f",&a);
    printf("veuillez entrer la valeure de b : ");
    scanf("%f",&b);
    s = a + b;
    p = a - b;
    v = a * b;
    f = a / b;
    printf("a + b = %.2f \n", s);
    printf("a - b = %.2f \n", p);
    printf("a * b= %.2f \n", v);
    printf("a / b = %.2f \n", f);


    return 0;
}