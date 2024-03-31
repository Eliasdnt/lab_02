#include <stdio.h>


long long int calcularPotencia(int base, int expo)
{
    long long int result = 1;

    while (expo > 0)
    {
        result *= base;
        expo--;
    }

    return result;
}

int main()
{
    int base, expo;

    printf("Digite a base (número inteiro positivo): ");
    scanf("%d", &base);

    printf("Digite o expo (número inteiro positivo): ");
    scanf("%d", &expo);

    if (base < 0 || expo < 0)
    {
        printf("Por favor, insira números inteiros positivos.\n");
        return 1; 
    }

    long long int result = calcularPotencia(base, expo);
    printf("%d elevado a %d é igual a %lld\n", base, expo, result);

    return 0;
}