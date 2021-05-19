#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    srand(time(NULL));
    int a[10][10],i,j,k,nm,nM;
    nM = -1;
    nm = 101;
    for (i = 0; i< 10; i++)
    {
        for(j = 0; j<10; j++)
        {
            k = rand()%101;
            a[i][j] = k;
            if (k < nm)
            {
                nm = k;
            }
            else if (k > nM)
            {
                nM = k;
            }
            printf("%3i ",a[i][j]);
        }
        printf("\n");
    }
    printf("O maior numero foi: %i\n",nM);
    printf("O menor numero foi : %i\n",nm);
    return 0;
}
