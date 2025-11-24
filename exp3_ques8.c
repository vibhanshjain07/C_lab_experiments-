
#include <stdio.h>

int main() {
    int limit = 20;
    int i, j, sum;

    for (i = 1; i <= limit; i++) {
        for (j = i + 1; j <= limit; j++) {
            sum = i*i*i + j*j*j;
            for (int k = 1; k <= limit; k++) {
                for (int l = k + 1; l <= limit; l++) {
                    if (sum == k*k*k + l*l*l) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum, i, j, k, l);
                    }
                }
            }
        }
    }

    return 0;
}

