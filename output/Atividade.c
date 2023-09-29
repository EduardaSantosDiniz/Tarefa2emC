#include <stdio.h>


int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int num;

    printf("Digite um número inteiro maior que 2: ");
    scanf("%d", &num);

    if (num <= 2) {
        printf("O número deve ser maior que 2.\n");
    } else {
    
        int found = 0;
        for (int i = 2; i <= num / 2; i++) {
            if (isPrime(i) && isPrime(num - i)) {
                printf("%d = %d + %d\n", num, i, num - i);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Não foi possível encontrar uma decomposição em números primos.\n");
        }
    }

    return 0;
}
