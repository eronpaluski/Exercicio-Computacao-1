#include <stdio.h>
int main ()
{

    float base, altura, perimetro, area, porta = 0.8, rodape;

    printf ("Digite a base do quarto (em metros): ");
    scanf ("%f", &base);
    printf ("Digite a a altura do quarto (em metros): ");
    scanf ("%f", &altura);

    perimetro = (altura * 2) + (base * 2);
    rodape = perimetro - porta;
    area = altura * base;

    printf ("O perimetro total do quarto eh: %.2f metros\n", perimetro);
    printf ("A quantidade necessaria de rodape (descontando a porta) eh: %.2f metros\n", rodape);
    printf ("A area do quarto eh: %.2f metros quadrados\n ", area);

    return 0;

}
