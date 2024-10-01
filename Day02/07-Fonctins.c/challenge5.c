#include <stdio.h>
#include <stdlib.h>

int a, f, i;
int factorielle(){
    if(a == 0)
      f = 1;
    
    else if(a > 0){
        f = 1;
        for( i=1 ; i<=a ; i++){
            f = f * i;
        }
    }

    else if(a < 0)
      printf("nombre negative");

    else 
      printf("erreur");

    return f;
}

int main()
{
    printf("veuillez entrer un nombre positive : ");
    scanf("%d", &a);

    f = factorielle();
    
    printf("le factorielle de %d est %d", a, f);

    return 0;
}