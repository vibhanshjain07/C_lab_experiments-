#include <stdio.h>

int main() {
    int a[100], n, i, num, freq = 0;

    printf("Enter count of numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++) {
        if(a[i] == num) {
            freq++;
        }
    }

    printf("The number %d appears %d times in the list.\n", num, freq);

    return 0;
}
