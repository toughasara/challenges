#include <stdio.h>
#include <stdlib.h>


   int  n, i, x;
   int rechlin (int T[], int n) {
      for ( i = 0; i < n ; i++){
            if (T[i] == x){
               return 0;
            }
         }
      return 1;
    }

int main()
{
    int f;
    printf("veuillez entrer la taille du tableau : ");
    scanf("%d", &n);
    int T[n];

    for(i=0;i<n;i++){
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    printf("\n");

    for(i=0;i<n;i++){
        printf("T[%d] = %d \n", i, T[i]);
    }
    printf("\n");

    printf("veuillez entrer le nombre a rechercher : ");
    scanf("%d", &x);
    
    f = rechlin (T , n);

    if (f == 0)
       printf("nombre  trouve ");
    else 
       printf("nombre non trouve");

    


   return 0;

}