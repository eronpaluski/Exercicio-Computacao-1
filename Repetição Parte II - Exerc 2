#include <stdio.h>
int main ()
{
    int num, contPositivos = 0, soma = 0;
    float media;


    printf ("Digite numeros inteiros (-1000 para encerrar): \n");
    scanf ("%d", &num);

    while (num != -1000)
    {
        if (num > 0)
        {
            soma += num;
            contPositivos++;
        }
        printf ("Digite numeros inteiros (-1000 para encerrar): \n");
        scanf ("%d", &num);
    }
    if (contPositivos > 0)
    {
        media = soma / contPositivos;
        printf ("Quantidade de valores positivos: %d\n", contPositivos);
        printf ("Media dos valo1res positivos: %.1f\n", media);

    }
    else
    {
        printf ("Nenhum valor positivo foi digitado. \n");
    }

    return 0;
}
