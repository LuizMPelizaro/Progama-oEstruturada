#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    srand(time(NULL));
    int i;
    float a[10];
    for(i = 0; i < 10; i++)
    {
        a[i] =(float)(rand())/(float)(RAND_MAX);
        printf("%0.3f ",a[i]);
    }
    return 0;
}
