#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int NB;
    int Somme=0;
    int Max=0;
    

    printf("Entrez un nombre positif \n");

    while(NB!=0)
    {
        scanf("%d",&NB);

        while (NB<0 || NB>100)
        {
             
           printf("! le nombre incorrecte entrez un nombre entier positifs inférieurs a 100 et seperiore de 0 \n");
           scanf("%d",&NB);
        }   
        Somme = Somme + NB;
        
        if (Max<NB)
        {
            Max=NB;
            
        }
      
    }

    printf("la somme est :%d \n le Max est :%d",Somme,Max);



    return 0;
}