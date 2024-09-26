#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, s, i; 
    printf("veuillez entrer un chiffres : ");
    scanf("%d", &n);
    i = 0;
    while (n > 0){
      s = n % 10;
      i = i * 10 + s;
      n = n / 10;
    }
    printf("%d", i);
    

    return 0;
}