#include <stdio.h>
int main ()
{
    int num, i;

    printf ("Digite um numero inteiro entre 1 e 10 e veja sua tabuada:");
    scanf ("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        printf ("%d x %d = %d\n", num, i, num * i);
    }
    return 0;

}
