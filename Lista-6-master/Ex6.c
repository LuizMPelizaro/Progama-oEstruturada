#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    srand(time(NULL));
    int a[4],i,s =0,j=-1;
    for (i = 0; i < 4; i++)
    {
        a[i] = rand()%2;
        printf("%i ",a[i]);
    }
    a[0] = a[0]*pow(2,3);
    a[1] = a[1]*pow(2,2);
    a[2] = a[2]*pow(2,1);
    a[3] = a[3]*pow(2,0);
    printf("\n O valor em decimal é : %i",a[0]+a[1]+a[2]+a[3]);
    return 0;
}
