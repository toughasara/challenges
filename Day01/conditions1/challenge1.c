#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("entrer le nombre :");
    scanf("%d", &x);
    if (x % 2 == 0)
      printf("%d est un nombre est pair", x);
    else 
      printf("%d est un nombre est impair", x);

    return 0;
    
    
}
