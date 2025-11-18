#include <stdio.h>

struct Employee {
    char name[30];
    float basic, gross;
};

int main() {
    struct Employee e[2];
    int i;

    for(i = 0; i < 2; i++) {
        printf("Enter name and basic pay of employee %d: ", i+1);
        scanf("%s %f", e[i].name, &e[i].basic);
        e[i].gross = e[i].basic + 0.52 * e[i].basic;
    }

    printf("\nEmployee Name\tGross Salary\n");
    for(i = 0; i < 2; i++) {
        printf("%s\t\t%.2f\n", e[i].name, e[i].gross);
    }

    return 0;
}
