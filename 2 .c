#include<stdio.h>
int main ()
{

    float n1,n2,n3,
          media;
    int frequencia;

    printf ("Digite as tres notas: ");
    scanf ("%f %f %f", &n1, &n2, &n3 );

    media = (n1 + n2 + n3) / 3;

    printf ("Digite a frequencia (0-100): ");
    scanf ("%d", &frequencia);

    if (media > 8.0 && frequencia >= 75)
        printf ("O estudante foi Aprovado com Distincao pois teve media %.2f e frequencia %d%%. \n . ", media, frequencia);
    else if (media >= 6.0 && frequencia >= 75)
        printf ("O estudante foi Aprovado Direto pois teve media %.2f e frequencia %d%%.\n. ", media, frequencia);
                else if ((media >= 4.0 && media < 6.0 && frequencia >=75) ||
                         (media >= 6.0 && frequencia <75)||
                         (media >= 4.0 && frequencia >50 && frequencia<75))
                printf ("O estudante Vai para a final pois teve media %.2f e frequencia %d%%. \n.", media, frequencia);
                else
                    printf ("O estudante foi Reprovado Direto pois teve media %.2f e frequencia %d%%. \n.", media, frequencia);

                    return 0;
        }

