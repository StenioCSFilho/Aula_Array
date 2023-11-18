#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para trocar dois números
void troca(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para ordenar um array usando o algoritmo da bolha
void bubble(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                troca(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n;

    printf("Digite o número de elementos a serem ordenados: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("O número de elementos deve ser maior que zero.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    // Preencha o array com números aleatórios
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100; // Números aleatórios entre 0 e 99
    }

    // Imprima o array desordenado
    printf("Array desordenado: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ordenar o array
    bubble(arr, n);

    // Imprima o array ordenado
    printf("Array ordenado: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Liberar a memória alocada para o array

    return 0;
}