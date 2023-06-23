// 6.Wite a program to find the greatest of three numbers
#include <stdio.h>

int findGreatest(int num1, int num2, int num3)
{
    int greatest = num1; // Assume num1 is the greatest initially

    // Check if num2 is greater than the current greatest
    if (num2 > greatest)
    {
        greatest = num2;
    }

    // Check if num3 is greater than the current greatest
    if (num3 > greatest)
    {
        greatest = num3;
    }

    return greatest;
}

int main()
{
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int result = findGreatest(num1, num2, num3);

    printf("The greatest number is: %d\n", result);

    return 0;
}
