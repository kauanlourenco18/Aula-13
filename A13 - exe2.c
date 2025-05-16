#include <stdio.h>

int main() {
    int maior;
    int vetor[5] = {9, 7, 3, 6, 8};

    printf("Vetor antes da ordenação: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (vetor[i] > vetor[j]) {
                maior = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = maior;
            }
        }
    }

    printf("Vetor ordenado: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
