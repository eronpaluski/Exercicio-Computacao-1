#include <stdio.h>
int main ()
{

    int distancia, min, seg, tempo_total_seg, ritmo_seg_por_km, ritmo_min, ritmo_seg;

    printf ("Qual a distancia percorrida (numero inteiro em quilometros)?: ");
    scanf ("%d", &distancia);

    printf ("Em quantos minutos voce percorreu?:");
    scanf ("%d", &min);

    printf ("Em quantos segundos voce percorreu?:");
    scanf ("%d", &seg);


    tempo_total_seg = min * 60 + seg;
    ritmo_seg_por_km = tempo_total_seg / distancia;
    ritmo_min = ritmo_seg_por_km / 60;
    ritmo_seg = ritmo_seg_por_km % 60;

    printf ("Saida: %d:%d", ritmo_min, ritmo_seg);

    return 0;
}
