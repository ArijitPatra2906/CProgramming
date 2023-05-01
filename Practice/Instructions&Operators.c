// Chapter 2 - Instructions & Operators

/* Arithmatic Operations*/

// 1. 5*2 - 2*3

#include <stdio.h>

int main()
{
    printf("%d", 5 * 2 - 2 * 3);
    return 0;
}

// 2. 5*2 / 2*3

#include <stdio.h>

int main()
{
    printf("%d", 5 * 2 / 2 * 3);
    return 0;
}

// 3. 5*(2/2)*3

#include <stdio.h>

int main()
{
    printf("%d", 5 * (2 / 2) * 3);
    return 0;
}

// 4. 5+2/2*3

#include <stdio.h>

int main()
{
    printf("%d", 5 + 2 / 2 * 3);
    return 0;
}

// Q. Write a program to check if a number is divisible by 2 or not

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number");
    scanf("%d", &number);
    printf("%d", number % 2 == 0);
    return 0;
}

// Q. Write a program to check if a number is Odd or Even

#include <stdio.h>

int main()
{
    // even -> 1
    // odd -> 0
    int number;
    printf("Enter a number");
    scanf("%d", &number);
    printf("%d", number % 2 == 0);
    return 0;
}

// Q. Write a program to check if a number is greater than 9 and less than 100

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    printf("%d", number > 9 && number < 100);
    return 0;
}

// Q. Write a program to print the average of 3 numbers.

#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter first number : ");
    scanf("%d", &x);

    printf("Enter second number : ");
    scanf("%d", &y);

    printf("Enter third number : ");
    scanf("%d", &z);

    printf("Average of 3 numbers is %d", (x + y + z) / 3);
    return 0;
}

// Q. Write a program to check if given character is digit or not.

#include <stdio.h>

int main()
{
    char x;
    printf("Enter character : ");
    scanf("%c", &x);
    if (x >= '0' && x <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Not Digit");
    }
    return 0;
}

// Q. Write a program to print the smallest number

#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter first number : ");
    scanf("%d", &x);

    printf("Enter second number : ");
    scanf("%d", &y);

    printf("Enter third number : ");
    scanf("%d", &z);

    if (x < y && x < z)
    {
        printf("%d is samllest number", x);
    }
    else if (y < z)
    {
        printf("%d is samllest number", y);
    }
    else
    {
        printf("%d is samllest number", z);
    }
    return 0;
}