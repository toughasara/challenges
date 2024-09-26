#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, m;
    printf("Table de Multiplication");
    printf("veuillez entrer un nombre : ");
    scanf("%d", &n);
    if(n > 0){
          for(i=1;i<=10;i++){
         m = n * i;
        printf("%d * %d = %d \n", n, i, m);
      }
    }
    else if(n == 0)
       printf("la factorielle = 1");
    else 
       printf("veuiller entrer un nombre positive");



       
    return 0;
    
    
}
    