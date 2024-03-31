#include <stdio.h>

int fibonacci(int n, int pil[])
{
    if (n <= 1)
    {
        return n;
    }

    if (pil[n] != -1)
    {
        return pil[n];
    }

    pil[n] = fibonacci(n - 1, pil) + fibonacci(n - 2, pil);

    return pil[n];
}

int main()
{
    int n;

    do
    {
        printf("Digite um inteiro entre 0 e 30 para n: "); 
        scanf("%d", &n);

       
        if (n < 0 || n > 30)
        {
            printf("Por favor, insira um inteiro entre 0 e 30.\n");
        }
    } while (n < 0 || n > 30);

  
    int pil[n + 1];
    for (int i = 0; i <= n; i++)
    {
        pil[i] = -1;
    }

    printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, fibonacci(n, pil));

    return 0;
}