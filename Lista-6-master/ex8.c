#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    srand(time(NULL));
    int a[4],b[4],i,n = 0;
    for (i = 0 ;i < 5; i ++ ){
        n = rand() % 20;
        a[i] = n ;
        printf("%i ", a[i]);
    }
    printf("\n O numero elevado ao  cubo \n");
    for (i = 0 ;i < 5; i ++ ){
        b[i] = pow(a[i],3);
        printf("%i ", b[i]);
    }
}
