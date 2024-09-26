#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, s, i, x, y;
    printf("Affichage de la Suite de Fibonacci \n");
    printf("entrer le nombre n :");
    scanf("%d", &n);
    x = 0;
    y = 1;
    for(i=0;i<=n;i++){
        if(n == x)
          printf("%d", x);
          continue;
        if (n == y)
          printf("%d", y);
          continue;
        {
            s = x + y;
            printf("%d ", s);
            x = y;
            y = s;
            
        }
    }
    


    return 0;
    
    
}