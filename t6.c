#include <stdio.h>

int main()
{
    int N, primo = 1;
    printf("Digite o numero que voce deseja saber se e primo ou nao: ");
    scanf("%d", &N);

    if(N <= 1){
        primo = 0;
    }

    for(int i = 2; i * i <= N; i++){
        if(N % i == 0){
            primo = 0;
            break;
        }
    }

    if(primo)
        printf("%d e Primo\n", N);
    else
        printf("%d Nao e primo\n",N);

    return 0;
}