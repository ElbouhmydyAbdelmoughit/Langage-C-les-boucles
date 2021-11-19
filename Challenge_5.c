#include<stdio.h>
#include<stdlib.h>
 
int N,inverse,reste;
int main()
{
    printf("entrez un nombre :\n");
    scanf("%d",&N);
    inverse=0;

    while(N>0)
 
    {
 
        reste=N%10;
 
        inverse=10*inverse+reste;
 
        N=N/10;
 
    }
 
    printf("l'inverse de l'entier donne en entrée est %d :\n",inverse);
 
 
    return 0;
}
 
