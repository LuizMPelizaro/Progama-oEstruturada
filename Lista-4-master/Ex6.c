#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i = 100; i <= 300;i++){
        if (i%4 == 0){
            printf("%i\n",i);
        }
    }
    return 0;
}
