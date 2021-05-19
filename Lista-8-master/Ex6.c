#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    srand(time(NULL));
    int a[5][5],i,j,k,nm,nM,sm,sM;
    nM = -1;
    nm = 101;
    sm = 1000;
    sM = -1;
    for (i = 0; i< 5; i++)
    {
        for(j = 0; j<5; j++)
        {
            k = 100+rand()%899;
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
    for (i = 0; i< 5;i++){
        for (j = 0; j++ < 5;j++){
            if (a[i][j] > sM && sM != nM){
                sm = a[i][j];
            }
            else if (a[i][j] < sm && sm != nm){
                sm = a[i][j];
            }
        }
    }
    printf("O maior numero foi: %i\n",nM);
    printf("O segundo maior numero foi : %i\n",sM);
    printf("O menor numero foi : %i\n",nm);
    printf("O menor numero foi : %i\n",sm);
    return 0;
}
