// 1. Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include <stdio.h>

 int x = 10; // this is considered a global variable

void func_1() {
    printf(" x is a now a global variable and is equal to %d\n", x); 
}

int main() {
    func_1(); // this step shows the calling of the func_1 
    return 0;
}