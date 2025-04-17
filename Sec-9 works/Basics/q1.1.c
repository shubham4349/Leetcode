#include <stdio.h>

void main()
{

    int i;
    i = 1;

    do {
        i = printf("GU");
        printf("%d", i);
        i++;
    } while (i >= 3);
}