#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    printf("veuillez entrer la taille du tableau : ");
    scanf("%d", &n);
    int T[n];
    for(i=0;i<n;i++){
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    for(i=0;i<n;i++){
        printf("T[%d] = %d \n", i, T[i]);
    }
   

   return 0;

}