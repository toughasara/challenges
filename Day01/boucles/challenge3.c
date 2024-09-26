#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, s, i;
    printf("entrer le nombre n :");
    scanf("%d", &n);
    if(n >= 0){
          s = 0;
      for(i=1;i<=n;i++){
          s = s + i;
      }
      printf("le résultat est %d", s);
    }
    else 
      printf("veuillez entrer un nombre positive");

    return 0;
    
    
}