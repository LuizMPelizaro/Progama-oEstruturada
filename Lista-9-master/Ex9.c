#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
float Sigmoide (float x){
    float resultado;
    float e = 2.7182;
    resultado = 1/(1+pow(e,-x));
    return (resultado);
}
int main()
{
    srand(time(NULL));
    float x,resultado;
    printf("Digite um numero :");
    scanf("%f",&x);
    resultado = Sigmoide(x);
    printf("Resultado : %f",resultado);
    return 0;
}

