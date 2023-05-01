
// Chapter 1 - Variables, Data types + Input/Output

/* Write a program to calculate perimeter of rectangle.Take sides,a & b,from the user. */

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter length");
    scanf("%d", &a);

    printf("Enter width");
    scanf("%d", &b);

    printf("Perimeter of rectengle %d", 2 * (a + b));
    return 0;
}

/* Take a number (n) from user and output its cube*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number");
    scanf("%d", &n);


    printf("Perimeter of rectengle %d", n * n * n);
    return 0;
}