// 7.Write a program to find the greatest among ten numbers.
#include <stdio.h>

int findGreatest(int numbers[], int size)
{
    int greatest = numbers[0]; // Assume the first number is the greatest

    // Iterate through the remaining numbers
    for (int i = 1; i < size; i++)
    {
        // Check if the current number is greater than the current greatest
        if (numbers[i] > greatest)
        {
            greatest = numbers[i];
        }
    }

    return greatest;
}

int main()
{
    int numbers[10];

    printf("Enter ten numbers: ");

    // Read ten numbers from the user
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int result = findGreatest(numbers, 10);

    printf("The greatest number is: %d\n", result);

    return 0;
}
