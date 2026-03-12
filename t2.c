#include <stdio.h>

int fatorial(int n) {
    if (n <= 1) {
        return 1;
    }
    
    return n * fatorial(n - 1);
}

int main() {
    int N;
    printf("Digite o número que você deseja o fatorial: ");

    scanf("%d", &N);

    printf("%d\n", fatorial(N));

} 