#include <stdio.h>
#include <math.h>

int calcula_raizes(float a, float b, float c, float *x1, float *x2)
{
    float delta = b * b - 4 * a * c;

    if (a == 0)
    {
        return 0;
    }

    if (delta < 0)
    {
        return 0;
    }
    else if (delta == 0)
    {
        *x1 = -b / (2 * a);
        return 1;
    }
    else
    {
        *x1 = (-b + sqrt (delta)) / (2 * a);
        *x2 = (-b - sqrt (delta)) / (2 * a);
        return 2;
    }
}

int main ()
{
    float a, b, c;
    float x1,x2;
    int n_raizes;

    printf("Digite os coeficientes a, b, c da funcao : ");
    scanf ("%f %f %f", &a, &b, &c);

    n_raizes = calcula_raizes(a, b, c, &x1, &x2);

    if (n_raizes == 0)
    {
        printf ("Nao ha raizes reais. \n");
    }
    else if (n_raizes == 1)
    {
        printf ("Existe uma raiz real: %.2f\n", x1);
    }
    else
    {
        printf ("As raizes reais sao: %.2f e %.2f \n", x1, x2);
    }

    return 0;
}
