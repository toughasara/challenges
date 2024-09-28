#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, x, m;
    printf("veuillez entrer la taille du tableau : ");
    scanf("%d", &n);
    int T[n];
    for(i=0;i<n;i++){
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    for(i=0;i<n;i++){
        x = 0;
        for(i=0;i<n;i++){
            if(T[i] > T[i+1])
              m = T[i];
              T[i] = T[i+2];
              m = T[i+1];
              x++;    
        }
        if(x == 0)
          break;
    }
    for(i=0;i<n;i++){
        printf("T[%d] = %d \n", i, T[i]);
    }
    

   

   return 0;

}