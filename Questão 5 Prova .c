#include <stdio.h>
int main ()
{
    int num, contPares, i;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &num);

    for (i = 2; i <= num; i += 2)
    {
        printf ("%d\n", i);
    }
    return 0;
}
