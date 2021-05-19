#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1,j = 0;
    for (i = 1;i <= 10;i++){
            printf("Taboada do %i\n",i);
        for(j = 1;j <= 10;j++){
            printf("%ix%i = %i\n",i,j,i * j);
        }
        j = 1;
    }
    return 0;
}
