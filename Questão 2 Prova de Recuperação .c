#include <stdio.h>
int main ()
{
    int num, inicio,final, soma = 0, i;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &num);
    printf ("Digite o inicio do intervalo: ");
    scanf ("%d", &inicio);
    printf ("Digite o final do intervalo: ");
    scanf ("%d", &final);

    for (i = inicio; i <= final; i++)
    {
        if (i % num == 0)
        {
            soma += i;
        }
    }

    printf ("A soma dos multiplos de %d no intervalo definido eh: %d", num, soma);
}
