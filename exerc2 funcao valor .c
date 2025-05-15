#include <stdio.h>
int calculaDigitoVerificador(int num);

int main ()
{
    int numero;

    printf ("Digite um numero de 3 digitos: ");
    scanf ("%d", &numero);

    int digito = calculaDigitoVerificador (numero);
    printf ("Digito verificador: %d\n", digito);

    return 0;
}
int calculaDigitoVerificador(int num)
{
    int x1, x2, x3, soma;

    x1 = num / 100;
    x2 = (num / 10) %10;
    x3 = num % 10;

    soma = (1 * x1 + 2 * x2 + 3 * x3) % 11;
    return soma % 10;
}
