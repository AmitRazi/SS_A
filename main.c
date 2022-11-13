#include <stdio.h>

#include "NumClass.h"

int main()
{
    // read the inputs x and y
    int x = 0, y = 0;
    scanf("%d%d", &x, &y);

    // print the prime numbers
    printf("The Armstrong numbers are:");
    for (int i = x; i <= y; i++)
    {
        if (isArmstrong(i) == 1)
        {
            printf(" %d", i);
        }
    }
    printf("\n");

    // print the Armstrong numbers
    printf("The Palindromes are:");
    for (int i = x; i <= y; i++)
    {
        if (isPalindrome(i) == 1)
        {
            printf(" %d", i);
        }
    }
    printf("\n");

    // print the strong numbers
    printf("The Prime numbers are:");
    for (int i = x; i <= y; i++)
    {
        if (isPrime(i) == 1)
        {
            printf(" %d", i);
        }
    }
    


    // print the palindrome numbers
    printf("\nThe Strong numbers are:");
    for (int i = x; i <= y; i++)
    {
        if (isStrong(i) == 1)
        {
            printf(" %d", i);
        }
    }
    return 0;
}
