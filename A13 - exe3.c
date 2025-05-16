#include <stdio.h>
#include <string.h>

void ordenarLetras(char* palavra) {
    int tamanho = strlen(palavra);
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (palavra[j] > palavra[j + 1]) {
                char temp = palavra[j];
                palavra[j] = palavra[j + 1];
                palavra[j + 1] = temp;
                }
            }
        }
    }

int compararPalavras(char* palavra1, char* palavra2) {
    int i = 0;
    while (palavra1[i] && palavra2[i]) {
        if (palavra1[i] != palavra2[i]) {
            return palavra1[i] - palavra2[i];
            }
        i++;
        }
    return palavra1[i] - palavra2[i];
    }

int main() {
    char p1[100], p2[100];

    printf("Digite a primeira palavra: ");
    scanf("%99s", p1);

    printf("Digite a segunda palavra: ");
    scanf("%99s", p2);

    if (strlen(p1) != strlen(p2)) {
        printf("Essas palavras têm tamanhos diferentes, não podem ser anagramas.\n");
        }
    else {

        ordenarLetras(p1);
        ordenarLetras(p2);

        if (compararPalavras(p1, p2) == 0) {
            printf("São anagramas.\n");
            }
        else {
            printf("Não são anagramas.\n");
            }
        }

    return 0;
    }
