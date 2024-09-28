#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, g;
    printf("veuillez entrer la taille du tableau : ");
    scanf("%d", &n);
    int T[n];
    for(i=0;i<n;i++){
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

        for(g=n-1 , i = 0 ; g>=0 , i < n ; g--, i++ ){
             printf("T[%d] = %d \n", i, T[g]);
        }
    
   

   return 0;

}