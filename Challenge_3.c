#include <stdio.h>
#include <stdlib.h>
int main()
{
    int NB;
    int i;
    int Temp;
    
    printf("Donner un nombre :\n");
    scanf("%d",&NB);
    
    
    if (NB==1 || NB==0)
    Temp=1;
    for (i=2;i<NB;i++)
    {
       if(NB%i!=0)
       Temp=0;
       
       else
       Temp=1;
    }
    
    if(Temp==0)
     printf("le nombre est premier ");
   
        else
        printf("ce nombre est no premier ");
    
       
  return 0;
}