#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    srand(time(NULL));
    int a[6][6],i,j;
    for (i = 0;i< 6;i++){
        for(j = 0; j<6; j++){
            a[i][j] = 0;
            if(j == i){
                a[i][j] =1;
            }
            printf("%2i ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
