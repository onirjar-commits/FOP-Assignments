#include <stdio.h>
#include <math.h>

void display(int n, float a[10][10]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }
}

void addition(int r, int c, float a[10][10], float b[10][10]) {
    float sum[10][10];

    printf("\nMatrix Addition Result:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%.2f ", sum[i][j]);
        }
        printf("\n");
    }
}

void saddlePoint(int n, float a[10][10]) {
    int found = 0;

    for(int i = 0; i < n; i++) {
        int min_col = 0;
        float min = a[i][0];

        for(int j = 1; j < n; j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                min_col = j;
            }
        }

        int k;
        for(k = 0; k < n; k++) {
            if(a[k][min_col] > min)
                break;
        }

        if(k == n) {
            printf("\nSaddle Point: %.2f at (%d,%d)\n", min, i, min_col);
            found = 1;
        }
    }

    if(!found)
        printf("\nNo Saddle Point found\n");
}

float determinant(int n, float a[10][10]) {
    float det = 0;

    if(n == 2) {
        det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    }
    else if(n == 3) {
        det = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])
            - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])
            + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);
    }

    return det;
}

void inverse(int n, float a[10][10]) {
    if(n != 2) {
        printf("\nInverse implemented only for 2x2 matrix\n");
        return;
    }

    float det = determinant(n, a);

    if(det == 0) {
        printf("\nInverse not possible (determinant = 0)\n");
        return;
    }

    float inv[10][10];

    inv[0][0] = a[1][1]/det;
    inv[0][1] = -a[0][1]/det;
    inv[1][0] = -a[1][0]/det;
    inv[1][1] = a[0][0]/det;

    printf("\nInverse Matrix:\n");
    display(n, inv);
}

void magicSquare(int n, float a[10][10]) {
    int i, j;
    float sum = 0, d1 = 0, d2 = 0;

    for(j = 0; j < n; j++)
        sum += a[0][j];

    int magic = 1;

    for(i = 1; i < n; i++) {
        float row = 0;
        for(j = 0; j < n; j++)
            row += a[i][j];

        if(row != sum)
            magic = 0;
    }

    for(j = 0; j < n; j++) {
        float col = 0;
        for(i = 0; i < n; i++)
            col += a[i][j];

        if(col != sum)
            magic = 0;
    }

    for(i = 0; i < n; i++) {
        d1 += a[i][i];
        d2 += a[i][n-i-1];
    }

    if(d1 != sum || d2 != sum)
        magic = 0;

    if(magic)
        printf("\nMatrix is a Magic Square\n");
    else
        printf("\nMatrix is NOT a Magic Square\n");
}

int main() {
    int r, c, n;
    float a[10][10], b[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%f", &a[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%f", &b[i][j]);

    addition(r, c, a, b);

    printf("\nEnter size of square matrix for other operations: ");
    scanf("%d", &n);

    printf("Enter elements of square matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%f", &a[i][j]);

    saddlePoint(n, a);
    inverse(n, a);
    magicSquare(n, a);

    return 0;
}