/**
 * C program to find all angles of a triangle if two angles are given
 */

#include <stdio.h>

int main()
{
    int a, b, c;

    /* Input two angles of the triangle */
    printf("Enter first angle of triangle: ");
    scanf("%d", &a);
    printf("Enter second angle of triangle: ");
    scanf("%d",&b);

    /* Compute third angle */
    c = 180 - (a + b);

    /* Print value of the third angle */
    printf("Third angle of the triangle = %d\n", c);

    return 0;
}
