#include <stdio.h>

int main() {
    int a[100], n, i;
    int max, second;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];
    second = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] > max) {
            second = max;
            max = a[i];
        } else if(a[i] > second && a[i] != max) {
            second = a[i];
        }
    }

    printf("Second largest number is: %d\n", second);

    return 0;
}
