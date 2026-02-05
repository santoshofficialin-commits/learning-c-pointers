
/*
 * File: pointers.c
 * Description: Demonstrates pointers and pointer-to-pointer in C
 * Author: Santosh
 */

#include <stdio.h>

int main(void)
{
    int i = 20;
    int *j = &i;  // pointer to int i
    int **k = &j; // pointer to pointer j

    printf("Value of i            : %d\n", i);
    printf("Address of i          : %p\n", (void *)&i);

    printf("\nUsing pointer j:\n");
    printf("Value stored in j     : %p\n", (void *)j);
    printf("Value pointed by j    : %d\n", *j);
    printf("Address of j          : %p\n", (void *)&j);

    printf("\nUsing pointer-to-pointer k:\n");
    printf("Value stored in k     : %p\n", (void *)k);
    printf("Value pointed by k    : %p\n", (void *)*k);
    printf("Value pointed by *k   : %d\n", **k);
    printf("Address of k          : %p\n", (void *)&k);

    return 0;
}
