#include <stdio.h>
int main ()
{
    int num, maior;

    printf ("Digite numeros inteiros (negativo para encerrar): \n");
    scanf ("%d", &num);
    maior = num;
    while (num >= 0)
    {

        if (num > maior)
        {
            maior = num;
        }
        printf ("Digite numero inteiro (negativo para encerrar): \n");
        scanf ("%d", &num);

    }
    printf ("O maior valor digitado foi: %d\n", maior);

    return 0;
}
