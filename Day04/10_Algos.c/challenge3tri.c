#include <stdio.h>
#include <stdlib.h>


    int i, j, n, t;
    void triselection (int T[], int n) {
        for ( i = 0; i < n - 1; i++) {
           int min = i;
           for ( j = i + 1; j < n; j++){
              if (T[j] < T[min])
              min = j;
           }
        t = T [min];
        T [min] = T[i];
        T [i] = t;
        }
    }

int main()
{

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

    triselection ( T, n);

    for(i=0;i<n;i++){
        printf("T[%d] = %d \n", i, T[i]);
    }




    


   return 0;

}