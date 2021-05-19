#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    printf("Escreva o numero X e Y para saber a cordenada dele no mapa cartesiano\n");
    int X,Y;
    scanf("%i%i",&X,&Y);
    if (X > 0 && Y > 0){
        printf("Esta no 1ºQuadrante");
    }
    else if (X < 0 && Y > 0){
        printf("Esta no 2ºQuadrante");
    }
    else if (X < 0 && Y < 0 ){
        printf("Esta no 3ºQuadrante");
    }
    else if (X > 0 && Y < 0){
        printf("Esta no 4ºQuadrante");
    }
    else {
        printf("Erro");
    }
    return 0;
}
