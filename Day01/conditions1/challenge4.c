#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, d, x, x1, x2;
    printf("veuillez entrer le nombre a :");
    scanf("%f", &a);
    printf("veuillez entrer le nombre b :");
    scanf("%f", &b);
    printf("veuillez entrer le nombre c :");
    scanf("%f", &c);
    if (a == 0){
        if (b == 0)
           printf("pas de solution");
        else{
            x = -c / b;
            printf("solution est %.2f", x);
        }
    }
    else {
      d = pow(b,2) - 4*a*c;
      if(d<0)
          printf("pas de solution réelle");
      else if(d == 0){
          x = -b/(2*a);
          printf("solution est %.2f", x);
      }
      else{
          x1 = (-b + sqrt(d)) / (2*a);
          x2 = (-b - sqrt(d)) / (2*a);
          printf("les solutions sont %.2f et %.2f ", x1, x2);
      }
    }

    return 0;
}