#include <stdio.h>
#define N 3

void printMatrix(int m[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", m[i][j]);    
        }
        printf("\n");
    }
}

void addMatrix(int a[N][N], int b[N][N]) {
    int c[N][N];
    printf("\nMatrix Addition:\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            c[i][j] = a[i][j] + b[i][j];
    printMatrix(c);
}

void saddlePoint(int a[N][N]) {
    printf("\n--- Saddle Point ---\n");
    int found = 0;
    for (int i = 0; i < N; i++) {
        int minVal = a[i][0], minCol = 0;
        for (int j = 1; j < N; j++) {
            if (a[i][j] < minVal) {
                minVal = a[i][j];
                minCol = j;
            }
        }
        int isMax = 1;
        for (int k = 0; k < N; k++) {
            if (a[k][minCol] > minVal) {
                isMax = 0;
                break;
            }
        }
        if (isMax) {
            printf("Saddle point found: a[%d][%d] = %d\n", i, minCol, minVal);
            found = 1;
        }
    }
    if (!found)
        printf("No saddle point found.\n");
}

void inverseMatrix(int d[2][2]) {       
    printf("\n--- Matrix Inverse (2x2) ---\n");
    int det = d[0][0] * d[1][1] - d[0][1] * d[1][0];
    if (det == 0) {
        printf("Matrix is singular - inverse does not exist.\n");
        return;
    }
    float inv[2][2];
    inv[0][0] =  (float) d[1][1] / det;
    inv[0][1] = -(float) d[0][1] / det;
    inv[1][0] = -(float) d[1][0] / det;
    inv[1][1] =  (float) d[0][0] / det;

    printf("Inverse matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%8.3f ", inv[i][j]); //8 charchters with 3 numbers after decimal
        printf("\n");
    }
}

void magicSquare(int a[N][N]) {
    printf("\n--- Magic Square Check for first matrix---\n");

    int target = a[0][0] + a[0][1] + a[0][2];  // first row sum = target

    // check all rows
    int r0 = a[0][0] + a[0][1] + a[0][2];
    int r1 = a[1][0] + a[1][1] + a[1][2];
    int r2 = a[2][0] + a[2][1] + a[2][2];

    // check all columns
    int c0 = a[0][0] + a[1][0] + a[2][0];
    int c1 = a[0][1] + a[1][1] + a[2][1];
    int c2 = a[0][2] + a[1][2] + a[2][2];

    // check diagonals
    int diag1 = a[0][0] + a[1][1] + a[2][2];    
    int diag2 = a[0][2] + a[1][1] + a[2][0];    

    if (r0==target && r1==target && r2==target &&
        c0==target && c1==target && c2==target &&
        diag1==target && diag2==target)
        printf("It IS a magic square! Magic sum = %d\n", target);
    else
        printf("It is NOT a magic square.\n");
}

int main() {
    int a[N][N], b[N][N], d[2][2];

    printf("Enter first 3x3 matrix:\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second 3x3 matrix:\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &b[i][j]);

    printf("Enter 2x2 matrix for inverse:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &d[i][j]);

    addMatrix(a, b);
    saddlePoint(a);
    inverseMatrix(d);
    magicSquare(a);

    return 0;
}
