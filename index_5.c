#include <stdio.h>

int main(void)

{
    float c;

    printf("Celcius: ");
    scanf("%f", &c);
    int f = (c * 9 / 5) + 32;
    {
        printf("Fahrenhieit=%i\n", f);
    }
    return 0;
}