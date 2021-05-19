#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    printf("\tDado\n");
    int i,d;
    float n1=0,n2=0,n3=0,n4=0,n5=0,n6=0;
    for (i = 0; i <1000; i++)
    {
        d = rand()%6;
        if (d == 0)
        {
            n1++;
        }
        else if (d == 1)
        {
            n2++;
        }
        else if (d == 2)
        {
            n3++;
        }
        else if (d == 3)
        {
            n4++;
        }
        else if (d == 4)
        {
            n5++;
        }
        else if (d == 5)
        {
            n6++;
        }
    }
    n1 = (n1*100)/1000;
    n2 = (n2*100)/1000;
    n3 = (n3*100)/1000;
    n4 = (n4*100)/1000;
    n5 = (n5*100)/1000;
    n6 = (n6*100)/1000;
    printf("%0.2f%% Lado 1\n%0.2f%% Lado 2\n%0.2f%% Lado 3\n%0.2f%% Lado 4\n%0.2f%% Lado 5\n%0.2f%% Lado 6\n",n1,n2,n3,n4,n5,n6);
    return 0;
}
