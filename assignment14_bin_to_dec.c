#include <stdio.h>

int main(void) {
    int binary_num;
    printf("Enter a binary number: ");
    if (scanf("%d", &binary_num) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    int dec = 0;
    int place = 1;

    while (binary_num > 0) {
        int digit = binary_num % 10;
        if (digit != 0 && digit != 1) {
            printf("Invalid binary number\n");
            return 1;
        }
        dec += digit * place;
        place *= 2;
        binary_num /= 10;
    }

    printf("Decimal number = %d\n", dec);
    return 0;
}
