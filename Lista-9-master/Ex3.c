#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int  RomanoD (int n){
	int rd;
	int ru;
	char D;
	char U;
    rd = ((n / 10)%10)*10;
    ru = ((n /1)%10)*1;
    if (n >= 10){
	if (rd == 10){
        printf("X");
    }
    else if (rd == 20){
        printf("XX");
    }
    else if (rd == 30){
        printf("XXX");
    }
    else if (rd == 40){
        printf("XL");
    }
    else if (rd == 50){
        printf("L");
    }
    else {
        printf("ERRO");
    }}
    if(ru == 1){
        printf("I");
    }
    else if (ru == 2){
        printf("II");
    }
    else if (ru == 3){
        printf("III");
    }
    else if (ru == 4){
        printf("IV");
    }
    else if (ru == 5){
        printf("V");
    }
    else if(ru == 6){
        printf("VI");
    }
    else if (ru == 7){
        printf("VII");
    }
    else if (ru == 8){
        printf("VIII");
    }
    else if (ru == 9){
        printf("IX");
    }
    else if (ru == 10){
        printf("X");
    }
    return (RomanoD);
}
int main()
{
    int n;
    printf("Escreva o numero de 1 a 50\n");
    scanf("%i",&n);
    if (n > 50 || n < 1){
        printf("Erro");
    }
    else {
            RomanoD(n);
    }
    return 0;
}
 
