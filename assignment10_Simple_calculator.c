# include <stdio.h>

int main() {
    int choice;
    int x, y, i;
    float result;
    long fact = 1;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power(x^y)\n");
    printf("6. Factorial (x!)\n");

    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &x, &y);
            printf("Result: %d\n", x + y);
            break;
        
        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &x, &y);
            printf("Result: %d\n", x - y);
            break;
        
        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &x, &y);
            printf("Result: %.2f\n", (float)x * y);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &x, &y);
            if (y != 0) {
                result = (float)x / y;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            printf("Enter base and exponent: ");
            scanf("%d %d", &x, &y);
            result = 1;
            for (i = 0; i < y; i++) {
                result *= x;
            }
            printf("Result: %.2f\n", result);
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%d", &x);
            for (i = 1; i <= x; i++) {
                fact *= i;
            }
            printf("Result: %ld\n", fact);
            break;
        default:
            printf("Invalid choice. Please select a number between 1 and 6.\n");
    }   

}