#include <stdio.h>
#include <string.h>

int main() {
    char palavra[11]; 
    int palindromo = 1;

    printf("Digite a palavra (até 10 letras): ");
    scanf("%10s", palavra);  

    int tamanho = strlen(palavra);
    int metade = tamanho / 2;
    int fim = tamanho - 1;

    for(int comeco = 0; comeco < metade; comeco++) {
        if(palavra[comeco] != palavra[fim]) {
            palindromo = 0;
            break;
        }
        fim--;
    }

    if(palindromo) {
        printf("Resultado: É um palíndromo!\n");
    } else {
        printf("Resultado: NÃO é um palíndromo!\n");
    }

    return 0;
}
