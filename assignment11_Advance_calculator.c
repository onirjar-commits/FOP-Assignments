#include <stdio.h>
#include <math.h>

int main() {
    int n, i, fact = 1, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square root = %.2f\n", sqrt(n));

    printf("Square = %d\n", n * n);

    printf("Cube = %d\n", n * n * n);

    if (n <= 1) isPrime = 0;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");

    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial = %d\n", fact);

    printf("Prime factors: ");
    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    return 0;
}