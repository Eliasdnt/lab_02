#include <stdio.h>
#include <math.h>

double calcularPotencia(int bs, int expo)
{
    if (expo >= 0)
    {
        return pow(bs, expo);
    }
    else
    {
        return 1.0 / pow(bs, -expo);
    }
}

int main()
{
    int bs, expo;

    printf("Digite a bs (número inteiro): ");
    scanf("%d", &bs);

    printf("Digite o expo (número inteiro): ");
    scanf("%d", &expo);

    double resultado = calcularPotencia(bs, expo);
    printf("%d elevado a %d é igual a %.6f\n", bs, expo, resultado);

    return 0;
}