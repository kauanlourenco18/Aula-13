#include <stdio.h>

int main() {
    int num;
    char opcao;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    do {
        printf("\nEscolha uma opção:\n");
        printf("A - Desenhar à esquerda\n");
        printf("D - Desenhar à direita\n");
        printf("F - Fechar o programa\n");
        printf("Digite a opção: ");
        scanf(" %c", &opcao);  

        switch(opcao) {
            case 'A':
                for (int i = 1; i <= num; i++) {
                    for (int j = 1; j <= i; j++) {
                        printf("*");
                    }
                    printf("\n");
                }
                break;

            case 'D':
                for (int i = 1; i <= num; i++) {
                    for (int j = 1; j <= num - i; j++) {
                        printf(" "); 
                    }
                    for (int j = 1; j <= i; j++) {
                        printf("*");
                    }
                    printf("\n");
                }
                break;

            case 'F':
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 'F');

    return 0;
}
