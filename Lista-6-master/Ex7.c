#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    srand(time(NULL));
    int a[3],i,j,r,v,vi,e,n;
    printf("Diga o valor do numero em decimal \n");
    e = 0;
    vi = 0;
    v = 0;
    for (j = 0 ; j < 5; j++)
    {
        for (i = 0; i < 4; i ++)
        {
            n = rand()%2;
            a[i] = n;
            printf("%i ",a[i]);
        }
        a[0] = a[0]*pow(2,3);
        a[1] = a[1]*pow(2,2);
        a[2] = a[2]*pow(2,1);
        a[3] = a[3]*pow(2,0);
        v = a[0]+a[1]+a[2]+a[3];
        scanf("%i",&r) ;
        if (r == v)
        {
            printf("Voce acertou!\n");
            vi ++;
        }
        else if(r != v)
        {
            printf("Voce erro !\n");
            e ++;
            if (e == 3)
            {
                printf("Voce perdeu todas a chances \n");
                break;
            }
        }
    }
    printf("Voce acertou :%i \nErrou : %i \n",vi,e);
}
