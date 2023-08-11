#include <stdio.h>
#define x 5

int max(int arr[x], int size) {
    int max_value = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }
    return max_value;
}

int min(int arr[x], int size) {
    int min_value = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i];
        }
    }
    return min_value;
}

int main() {
    int arr[x];
    int i;

    for (i = 0; i < x; i++) {
        printf("Enter Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Printing the array elements
    printf("Array elements: \n");
    for (i = 0; i < x; i++) {
        printf("%d ", arr[i]);
    }
	
	int maximum = max(arr, x);
    printf("\nMaximum value in the array: %d\n", maximum);
	
	int minimum = min(arr, x);
	printf("Minimum value in the array: %d\n", minimum);
    return 0;
}
