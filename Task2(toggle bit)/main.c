#include <stdio.h>

#include <stdio.h>


int main() {
    int num, n, new_num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position to toggle (0-31): ");
    scanf("%d", &n);

    new_num = num ^ (1 << n);

    printf("Number after toggling %dth bit: %d\n", n, new_num);

    return 0;
}


