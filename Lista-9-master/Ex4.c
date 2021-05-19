#include<stdio.h>
#include<locale.h>

int dia (int n)
{
    int n1;
    if (n < 32)
    {
        printf("%i de Janeiro de 2019\n",n);
    }
    else if (n > 31 && n < 58)
    {
        n = n - 31;
        printf("%i de Fevereiro de 2019\n",n);
    }
    else if (n > 59 && n < 91)
    {
        n = n - 59;
        printf("%i de Março de 2019\n",n);
    }
    else if (n > 90 && n <121)
    {
        n = n- 90;
        printf("%i de Abril de 2019\n",n);
    }
    else if (n > 120 && n < 152)
    {
        n =n - 120;
        printf("%i de Maio de 2019\n",n);
    }
    else if (n > 181 && n < 212)
    {
        n = n - 150;
        printf("%i de Junho de 2019\n",n);
    }
    else if(n > 211  && n < 244)
    {
        n = n -212;
        printf("%i de Janeiro de 2019\n",n);
    }
    else if (n > 243 && n < 274)
    {
        n = n - 243;
        printf("%i de Setembro de 2019\n",n);
    }
    else if (n > 273 && n < 305)
    {
        n = n - 273;
        printf("%i de Outubro de 2019\n",n);
    }
    else if (n > 304 && n <334)
    {
        n = n- 304;
        printf("%i de Novembro de 2019\n",n);
    }
    else if (n > 333 && n < 366)
    {
        n =n - 334;
        printf("%i de Dezembro de 2019\n",n);
    }
    else
    {
        printf("Erro\n",n);
    }
}
int main()
{
    int n ;
    printf("Escreva um numero de  1 a 365\n");
    scanf("%i",&n);
    dia(n);
}
