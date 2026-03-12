#include <stdio.h>

int main()
{
    int N; 
    int i = 1;
    printf("Digite um número: ");
    scanf("%d", &N);
    while(i < N){
        printf("%d ", i);
        i = i + 1;
    }
    return 0;
}
