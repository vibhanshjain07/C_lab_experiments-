#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int a, b, c, d;
    int x, y, z;

    // Read size of Matrix A
    printf("Enter rows and columns of Matrix A (a x b): ");
    scanf("%d %d", &a, &b);

    // Read Matrix A in row-major order
    printf("Enter elements of Matrix A (%d x %d):\n", a, b);
    for(x = 0; x < a; x++) {
        for(y = 0; y < b; y++) {
            scanf("%d", &A[x][y]);
        }
    }

    // Read size of Matrix B
    printf("Enter rows and columns of Matrix B (c x d): ");
    scanf("%d %d", &c, &d);

    // Read Matrix B in row-major order
    printf("Enter elements of Matrix B (%d x %d):\n", c, d);
    for(x = 0; x < c; x++) {
        for(y = 0; y < d; y++) {
            scanf("%d", &B[x][y]);
        }
    }

    // Check compatibility
    if(b != c) {
        printf("\nMatrix multiplication not possible!\n");
        printf("Number of columns of Matrix A (%d) must equal number of rows of Matrix B (%d).\n", b, c);
        return 0;
    }

    // Initialize result matrix C to 0
    for(x = 0; x < a; x++) {
        for(y = 0; y < d; y++) {
            C[x][y] = 0;
        }
    }

    // Matrix multiplication logic
    for(x = 0; x < a; x++) {
        for(y = 0; y < d; y++) {
            for(z = 0; z < b; z++) {
                C[x][y] += A[x][z] * B[z][y];
            }
        }
    }

    // Print Matrix A
    printf("\nMatrix A (%d x %d):\n", a, b);
    for(x = 0; x < a; x++) {
        for(y = 0; y < b; y++) {
            printf("%4d", A[x][y]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B (%d x %d):\n", c, d);
    for(x = 0; x < c; x++) {
        for(y = 0; y < d; y++) {
            printf("%4d", B[x][y]);
        }
        printf("\n");
    }

    // Print Resultant Matrix C
    printf("\nResultant Matrix (A x B) (%d x %d):\n", a, d);
    for(x = 0; x < a; x++) {
        for(y = 0; y < d; y++) {
            printf("%4d", C[x][y]);
        }
        printf("\n");
    }

    return 0;
}
