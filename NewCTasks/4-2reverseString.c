#include <stdio.h>
#define x 3

int main() {
    char string[x];
    int i;
    
    for (i = 0; i < x; i++) {
		printf("Enter Element %c: ", i);
        scanf("%c", &string[i]);
    }


    printf("Reversed Array elements: ");
    for (i = x ; i >= 0; i--) {
        printf("%c", string[i]);
    }
    
    return 0;
} 
