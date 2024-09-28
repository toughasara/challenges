#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, min;
    printf("veuillez entrer la taille du tableau : ");
    scanf("%d", &n);
    int T[n];
    for(i=0;i<n;i++){
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    min = T[0];
    for(i=1; i<n; i++){
       if(min > T[i])
          min = T[i];
    }
    
    printf("le minimum = %d \n", min);

   return 0;

}