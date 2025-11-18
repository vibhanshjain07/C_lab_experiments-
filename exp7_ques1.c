#include <stdio.h>

struct Complex {
    float real, imag;
};

struct Complex readComplex() {
    struct Complex c;
    printf("Enter real and imaginary parts: ");
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

void printComplex(struct Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

struct Complex sub(struct Complex a, struct Complex b) {
    struct Complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return c;
}

int main() {
    struct Complex c1, c2, sum, diff;

    printf("Enter first complex number:\n");
    c1 = readComplex();

    printf("Enter second complex number:\n");
    c2 = readComplex();

    sum = add(c1, c2);
    diff = sub(c1, c2);

    printf("Sum = ");
    printComplex(sum);

    printf("Difference = ");
    printComplex(diff);

    return 0;
}
