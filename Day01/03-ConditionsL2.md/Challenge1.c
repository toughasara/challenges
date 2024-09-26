#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Revenu_annuel, Score_de_credit, Duree_du_pret;
    printf("vous pouvez préciser les critères pour être éligible : \n ");
    printf("Revenu annuel (en euros) : ");
    scanf("%f", &Revenu_annuel);
    printf("Score de crédit (sur 1000) : ");
    scanf("%f", &Score_de_credit);
    printf("Durée du prêt (en années) : ");
    scanf("%f", &Duree_du_pret);
    if ((Revenu_annuel < 0) || (Duree_du_pret < 0) || (Score_de_credit < 0 || Score_de_credit > 1000)){
        printf("Les conditions ne sont pas correcte");
    }
    else {
      if ((Revenu_annuel >= 30000) && (Score_de_credit >= 700)   && (Duree_du_pret <= 10))
         printf("eligible");
      else if ((Revenu_annuel >= 30000) && (Score_de_credit > 650) && (Duree_du_pret <= 15))
         printf("eligible avec conditions");
      else 
         printf("Non eligible");
      
    }


    return 0;
    
    
}
