#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int i;
    int fact = 1;
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

// Function to calculate power
double power(double x, int n) {
    int i;
    double result = 1;
    for(i = 1; i <= n; i++) {
        result = result * x;
    }
    return result;
}

int main() {
    double x, sum = 0;
    int n, i;

    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        int sign = (i % 2 == 0) ? 1 : -1;
        int exponent = 2 * i + 1;

        sum = sum + sign * (power(x, exponent) / factorial(exponent));
    }

    printf("Sum of sine series = %lf\n", sum);

    return 0;
}