#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    srand(time(NULL));
    int i;
    float a[20],m,M,t;
    t = 0;
    m = 1.0;
    M = -1.0;
    for(i = 0; i < 20; i++)
    {
        a[i] = -1.0 * (float)(rand()) / (float)(RAND_MAX) + (float)(rand()) / (float)(RAND_MAX);
        printf("%0.3f ",a[i]);
        if(a[i] < m)
        {
            m = a[i];
        }
        else if(a[i] > M)
        {
            M = a[i];
        }
        t = t + a[i];
    }
    printf("\nMaior : %f" ,M);
    printf("\nMenor : %f" ,m);
    printf("\nMedia : %f" ,t/20);
    return 0;
}
