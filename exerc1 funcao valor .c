# include <stdio.h>
int arredonda (float x);

int main ()
{
    float num;
    int num_int;

    printf ("Digite um numero: ");
    scanf ("%f", &num);

    num_int = arredonda (num);

    printf ("O valor arredondado eh: %d\n", num_int);

    return 0;
}

int arredonda (float num)
{
    if (num > 0)

        return (int)(num + 0.5);
        else
            return (int)(num - 0.5);

}
