#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, s, i;
    printf("entrer le nombre n :");
    scanf("%d", &n);
    i = 0;
    while (i<n){
       s = 1 + 2*i;
       printf("%d ", s);
       i++;
    }
    
    return 0;
    
    
}