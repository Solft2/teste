#include <stdio.h>
#define TAM 5

int main()
{ 
    int N[TAM];
    int soma = 0;

    for(int i = 0; i < TAM; i++){
        printf("Digite o número na posição %d: ", i);
        scanf("%d", &N[i]);
        soma = soma + N[i];
    }

    printf("A soma do array é: %d\n", soma);

    return 0;
}