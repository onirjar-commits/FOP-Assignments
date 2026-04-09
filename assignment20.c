#include <stdio.h>

void swapWithoutPointers(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("After swapping without pointers: %d, %d\n", a, b);
    printf("a= %d, b=%d\n", a, b);
}

void swapWithPointers(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a, b;
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x=a;
    y=b;
    swapWithoutPointers(a, b);
    swapWithPointers(&x, &y);


    printf("Enter two numbers: ");

    printf("After swapping with pointers: %d, %d\n");
    printf("x= %d, y=%d\n", x, y);

    return 0;
}