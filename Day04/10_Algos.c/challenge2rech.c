#include <stdio.h>
#include <stdlib.h>


   int  n, i, x;
   int min, max;
   int rechbin (int T[], int x, int max, int min) {
      int mil;
      min = 0;
      max = n - 1;
      while(min <= max){
            mil = (min + max) / 2;
            if (T[mil] == x)
               return 0;
            else if(T[mil] < x)
               min = mil + 1;
            else
               max = mil - 1;
            
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
    
    f = rechbin (T , x , max , min);

    if (f == 0)
       printf("nombre  trouve ");
    else 
       printf("nombre non trouve");

    


   return 0;

}