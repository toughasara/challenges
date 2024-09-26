#include <stdio.h>
#include <stdlib.h>

int main()
{
   char caractere;
   printf("veuillez entrer un caractere : ");
   scanf("%c", &caractere);
   if ((caractere>= 'A') && (caractere <= 'Z'))
      printf("le caractere est un alphabet majuscule");
   else if ((caractere>= 'a') && (caractere <= 'z'))
      printf("le caractere n'est un alphabet majuscule");
   else 
      printf("erreur");
      
    return 0;
}