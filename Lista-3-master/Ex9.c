#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    printf("Escreva O valor aplicado e a quantidades de dias que o valor fico aplicado\n");
    int i;
    float r,tx;
    scanf("%f%i",&r,&i);
    tx = r /100;
    if (i < 181 && i > 0){
        printf("Você deve paga de imposto %0.2f R$",tx*22.5);
    }
    else if (i < 361 && i > 180){
        printf("Você deve paga de imposto %0.2f R$",tx*20);
    }
    else if (i < 721 && i > 360){
        printf("Você deve paga de imposto %0.2f R$",tx*17.5);
    }
    else if (i > 720){
        printf("Você deve paga de imposto %0.2f R$",tx*15);
    }
    else {
        printf("ERRO");
    }
    return 0;
}
