#include <stdio.h>

int main() {
    char name[4];
    int age;

    printf("What is your name? ");
    scanf("%s", &name);

    printf("How old are you? ");
    scanf("%d", &age);

    printf("Hello, %s! You are %d years old", name, age);

    return 0;
}
