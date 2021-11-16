#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int NB,i;

        printf("Entrez un nombre NB :\n");
        scanf("%d",&NB);
        i = 1;
        while(i<= 10)
        {
            printf("%d\n",NB*i);
            i++;
        }


    return 0;
}