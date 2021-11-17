#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int NB,i,Res;
    char Tab[10];

        printf("Entrez un nombre NB :\n");
        scanf("%d",&NB);
        i = 1;
        while(i<= 10)
        {
           Res = (NB*i);
           Tab[i]=Res;
           printf("%d\n",Tab[i]);
            i++;
        }


    return 0;
}