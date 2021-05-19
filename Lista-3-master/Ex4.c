#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    printf("Escreva um lugar para chuta a bola\n");
    printf("=========================\n");
    printf("|   1   |   2   |   3   |\n");
    printf("|   4   |   5   |   6   |\n");
    printf("|   7   |   8   |   9   |\n");
    int c,d;
    scanf("%i",&c);
    d = rand()% 10;
    if (c == d){
        printf("O GOLEIRO DEFENDEU");
    }
    else if (c != d){
        printf("VOCE ACERTOU O GOL");
    }
    return 0;
}
