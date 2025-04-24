#include <stdio.h>
int main ()
{

    int forca, nivel_arma;
    float multiplicador_critico, dano_total;

    printf ("Digite a forca do seu personagem (numero inteiro de 1 a 100):");
    scanf ("%d", &forca);

    printf ("Digite o nivel da arma (numero inteiro de 1 a 50): ");
    scanf ("%d", &nivel_arma);

    printf ("Digite o multiplicador de critico (numero real entre 1.0 e 2.0): ");
    scanf ("%f", &multiplicador_critico);

    dano_total = forca * nivel_arma * multiplicador_critico;

    if (dano_total > 5000)
        printf ("DANO CRITICO MASSIVO! \n");

    else if (dano_total > 1000 && dano_total < 5000)
        printf ("DANO CRITICO! \n");

    else
        printf ("Dano normal \n");

    printf ("Valor total do dano foi: %.2f\n", dano_total);

    return 0;

}
