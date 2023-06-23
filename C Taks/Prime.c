// 8.Write a program to check whether the given number is a prime.
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number)
{
    // Handle special cases
    if (number <= 1)
    {
        return false;
    }

    // Check for divisibility from 2 to the square root of the number
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false; // Number is divisible, not prime
        }
    }

    return true; // Number is prime
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number))
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
