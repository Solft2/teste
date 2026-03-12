#include <stdio.h>
#include <string.h>

int main()
{
    char texto[100];

    printf("Digite uma frase: ");
    fgets(texto, 100, stdin);

    int tamanho = strlen(texto);

    printf("Total de caracteres: %d\n", tamanho - 1);

    return 0;
}