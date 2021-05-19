#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    srand(time(NULL));
    int a[10][10],i,j;
    for (i = 0;i< 10;i++){
        for(j = 0; j<10; j++){
            a[i][j] = 10 + rand()%89;
            printf("%2i ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
