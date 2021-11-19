#include <stdio.h>
#include <math.h>

int main()
{
    int NB,n,res;
    printf("Entrez un nombre NB :\n");
    scanf("%d",&NB);
    printf("Entrez un nombre n :\n");
    scanf("%d",&n);
    while((NB<=0) || (n<0))
    {
        if(NB<=0)
        {
            printf("Entrez un nombre NB supirieur a 0 \n");
            scanf("%d",&NB);
        }
        else if(n<0)
        {
            printf("Entrez un nombre n supirieur ou egal a 0 \n");
        scanf("%d",&n);
        }
       
        
    }
     
     res = pow(NB,n);
    printf("le resultat est %d",res);

    return 0;
}
