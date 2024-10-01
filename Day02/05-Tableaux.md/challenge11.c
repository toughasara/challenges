#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, r, s;
    
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
      
    printf("veuillez entrer la valeur à remplacer : ");
    scanf("%d", &r);
    printf("veuillez entrer la nouvelle valeur : ");
    scanf("%d", &s);
    
    for(i=0;i<n;i++){
        if(T[i]==r){
          T[i]=s;
          break;
        }
    }
    
    for(i=0;i<n;i++)
       printf("T[%d] = %d \n", i, T[i]);
    
       
   
   return 0;

}