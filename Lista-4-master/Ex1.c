#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Escreva seu nome!\n");
    char n[40];
    int i;
    scanf("%s",&n);
    for (i = 1 ; i <= 20 ; i++ ){
        if (i < 10){
            printf("%s\n",n);
        }
        else {
            printf("%s",n);
        }
    }
    return 0;
}
