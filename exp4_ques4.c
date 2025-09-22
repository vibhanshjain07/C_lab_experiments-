// Declare a static local variable inside a function. Observe how its value persists across function calls.

#include <stdio.h>

void func_1() {
    static int a = 0; // Static variable
    a++;
    printf("func_1 called %d times\n", a);
}

int main() {
    // here the function is called 6 times and each time whenever the function is called a increases. it won't happen if it was a local variable.
    func_1();
    func_1();
    func_1();
    func_1();
    func_1();
    func_1();
    // If 'a' was not static, it would become 1 every time the function runs.
    return 0;
}