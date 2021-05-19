#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,f = 0;
    long long int r ;
    float e ;
    srand(time(NULL));
    for (i = 0; i <= 20; i++)
    {
        r = 1;
        for (f = 1; f <= i;f++){
            r = r*f;
            }
            e = e +1.0/r;
            printf("%i\t%f\n",i,e);
    }
    return 0;
}



