#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    j=0;
    for (i = 1 ; i<= 100;i++){
        if (i %2 == 0){
            j = i+j;
            printf("%i\n",j);
        }
    }
    return 0;
}
