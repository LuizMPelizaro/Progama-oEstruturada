#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    srand(time(NULL));
    int a[5][5],i,j,k,sn,sm;
    sn = 0;
    sm = 0;
    for (i = 0; i< 5; i++)
    {
        for(j = 0; j<5; j++)
        {
            k = 10-rand()%20;
            a[i][j] = k;
            if (k < 0)
            {
                sn = sn + k;
            }
            else if (k >= 0)
            {
                sm = sm + k;
            }
            printf("%3i ",a[i][j]);
        }
        printf("\n");
    }
    printf("A soma dos positivos : %i\n",sm);
    printf("A soma dos negativos : %i\n",sn);
    return 0;
}
