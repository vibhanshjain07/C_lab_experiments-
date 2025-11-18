#include <stdio.h>

union Address {
    char name[30];
    char home_address[50];
    char hostel_address[50];
    char city[30];
    char state[30];
    char zip[10];
};

int main() {
    union Address a;

    printf("Enter your present address: ");
    scanf("%s", a.home_address);

    printf("Present Address: %s\n", a.home_address);

    return 0;
}
