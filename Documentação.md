# Aula_Array

## Documentação do Arquivo Algoritmo da Bolha.c

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

### Funções
void 	troca (int *a, int *b)

void 	bubble (int arr[ ], int n)

int 	main ()
 
### Funções
◆ bubble()

void bubble	(int arr[ ], int n)	

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

◆ main()

int main ( )	
    
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
    
◆ troca()

void troca (int *a, int *b)
    
    {
    int temp = *a;
    *a = *b;
    *b = temp;
    }



## Documentação do Arquivo Exemplo 1.c

#include <stdio.h>

#include <stdlib.h>

### Funções
int main (int argc, char *argv[ ])
 
### Funções
◆ main()

int main (int argc, char *argv[ ]) 
    
    {
    int vec[5] = {1, 2, 3, 4, 5};
 
    printf("%s %13s\n", "Elementos", "Valor");
    for (int i = 0; i < 5; i++)
        printf("%7d %13d\n", i, vec[i]);
    return 0;
    }



## Documentação do Arquivo Exemplo 2.c

#include <stdio.h>

#include <stdlib.h>

### Funções
int main (int argc, char *argv[ ])
 
### Funções
◆ main()

int main (int argc, char *argv[ ])
     
    {
    int vec[5];
 
    for (int i = 0; i < 5; i++)
        vec[i] = i;
 
    printf("%s %13s\n", "Elementos", "Valor");
    for (int i = 0; i < 5; i++)
        printf("%7d %13d\n", i, vec[i]);
    return 0;
    }



## Documentação do Arquivo Exemplo 3.c

#include <stdio.h>

#include <stdlib.h>

### Funções
int main (int argc, char *argv[ ])
 
### Funções
◆ main()

int main	(int argc, char *argv[ ])		
    
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
