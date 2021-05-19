#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float ii ;
    for (i = 1;i <= 100; i++){
            ii = i;
        if (i%4 == 0){
            printf("Plim\n");
        }
        else {
            printf("%i\n",i);
        }
    }
    return 0;
}
