#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    if (argc <= 1)
    {
        printf("Entre com o número de elementos...\n");
        return -1;
    }

    int n0fElemtens = atoi(argv[1]);
    int vec[n0fElemtens];
    long long int total = 0;

    for (int i = 0; i < n0fElemtens; i++)
        vec[i] = 0;

    for (int i = 0; i < n0fElemtens; i++)
        vec[i] = i;

    printf("%s %13s\n", "Elementos", "Valor");
    for (int i = n0fElemtens - 1; i >= 0; i--)
    {
        printf("%7d %13d\n", i, vec[i]);
        total += vec[i];
    }

    printf("\nTotal: %lli\n", total);
    printf("Tamanho do Vetor: %ld\n", sizeof(vec));
    return 0;
}