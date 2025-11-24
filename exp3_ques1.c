#include <stdio.h>

int main() {
    int a, b, c;

    // Take input from the user
    printf("Enter the three sides of the triangle:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Check if the triangle is valid
    if (a + b > c && a + c > b && b + c > a) {
        printf("Triangle is valid.\n");

        // Check for equilateral triangle
        if (a == b && b == c) {
            printf("The triangle is equilateral.\n");
        }
        // Check for isosceles triangle
        else if (a == b || b == c || a == c) {
            printf("The triangle is isosceles.\n");
        }
        // Check for right-angled triangle
        else if ((a * a == b * b + c * c) ||
                 (b * b == a * a + c * c) ||
                 (c * c == a * a + b * b)) {
            printf("The triangle is right-angled.\n");
        }
        // Otherwise, it is scalene
        else {
            printf("The triangle is scalene.\n");
        }
    } else {
        printf("Triangle is not valid.\n");
    }

    return 0;
}
