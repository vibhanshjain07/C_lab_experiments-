#include <stdio.h>

int main() {
    int a[100], n, i;
    int pos = 0, neg = 0, even = 0, odd = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }


    printf("\nPositive numbers: ");
    for(i = 0; i < n; i++) {
        if(a[i] > 0) {
            printf("%d ", a[i]);
            pos++;
        }
    }
    printf("\nTotal Positive: %d\n", pos);

    // Print and count negative numbers
    printf("\nNegative numbers: ");
    for(i = 0; i < n; i++) {
        if(a[i] < 0) {
            printf("%d ", a[i]);
            neg++;
        }
    }
    printf("\nTotal Negative: %d\n", neg);

    // Print and count even numbers
    printf("\nEven numbers: ");
    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            printf("%d ", a[i]);
            even++;
        }
    }
    printf("\nTotal Even: %d\n", even);

    // Print and count odd numbers
    printf("\nOdd numbers: ");
    for(i = 0; i < n; i++) {
        if(a[i] % 2 != 0) {
            printf("%d ", a[i]);
            odd++;
        }
    }
    printf("\nTotal Odd: %d\n", odd);

    return 0;
}
