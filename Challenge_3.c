#include <stdio.h>

int main()
{
	 int NB;
    int i;
    int Temp;
    

    printf("Donner un nombre :\n");
    scanf("%d",&NB);
   
    for (i=2;i<NB;i++)
    {
    	Temp=1;
       if(NB%i!=0)
       Temp=0;
       
       else
       {
       		Temp=1;
       break;
	   }
       
    }
    
    if(Temp==0)
     printf("le nombre est premier ");
   
        else
        printf("ce nombre est no premier ");
    
       

	return 0;
}
