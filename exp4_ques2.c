// 2. Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function

#include <stdio.h>

int x = 20; 

void func_1() {
    int a = 10; // This is an example of Local variable.
    printf("x = %d\n", x);
    printf("a = %d\n", a); 
}

int main() {
    func_1();
    // printf("a = %d\n", a); // if this code runs then it will show an error since compiler cannot find 'a' in this piece of code since it is a local variable.
    printf("x = %d\n", x); 
    return 0;
}