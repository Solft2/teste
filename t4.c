#include <stdio.h>

int main()
{
    int opcao;
    float x;

    printf("1 para Celsius -> Fahrenheit\n");
    printf("2 para Fahrenheit -> Celsius\n");

    scanf("%d", &opcao);
    printf("Digite a temperatura: ");
    scanf("%f", &x);

    switch(opcao){
        case 1:
            printf("A temperatura %.2f C em Fahrenheit é: %.2f\n", x, (x * 9.0/5.0) + 32);
            break;
        case 2:
            printf("A temperatura %.2f f em celsius é: %.2f\n", x , (x - 32) * 5.0/9.0);
            break;
        default:
            printf("Conversão não suportada\n");
    }

    return 0;
}