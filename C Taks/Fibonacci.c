// 11..Write a program to generate the Fibonacci series.
#include <stdio.h>

void generateFibonacci(int n)
{
    int first = 0;
    int second = 1;

    printf("Fibonacci Series up to %d terms: ", n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", first);
        int next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main()
{
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    generateFibonacci(n);

    return 0;
}
