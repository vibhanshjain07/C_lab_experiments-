#include <stdio.h>

int main(void)

{
    int l, b;

        printf("Length: ");
        scanf("%i", &l);    

        printf("Breadth: ");
        scanf("%i", &b);

        printf("Area=%i, Perimeter=%i\n", l * b, 2 * (l + b));
 
        return 0;
}