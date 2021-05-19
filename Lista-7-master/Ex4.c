#include<stdio.h>
#include<string.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));
    int i,v;
    char p[15],in[15];
    v = 0;
    printf("Digite uma palavra :\n");
    scanf("%s",p);
    strcpy(in, p);
    strrev(in);
    printf("%s \t %s\n",p,in);
    v = strcmp(p,in);
    if(v == 0)
    {
        printf("A palavra %s é um palindromo\n",p);

    }
    else
    {
        printf("A Palavra %s nao é um palindromo\n",p);
    }
    return 0;
}
