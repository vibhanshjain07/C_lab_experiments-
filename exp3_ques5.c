
#include <stdio.h>

int main()
{
    int a, product;

    printf("Enter a Number: ");
    scanf("%d", &a);

    for (int i = 1; i <= 10; i++)
    {
        product= a * i;
        printf ("%i\n", product);
    }
return 0;
}
