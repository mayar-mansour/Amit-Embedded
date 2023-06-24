// 9.Write a program to check whether the given number is a palindromic number.
#include <stdio.h>

int isPalindrome(int number)
{
    int originalNumber = number;
    int reversedNumber = 0;

    while (number != 0)
    {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
    {
        printf("%d is a palindromic number.\n", number);
    }
    else
    {
        printf("%d is not a palindromic number.\n", number);
    }

    return 0;
}
