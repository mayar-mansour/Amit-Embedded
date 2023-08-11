#include<stdio.h>

int edit(int *x){
	return ++(*x);
}


int main(){
	int x ;
	printf("Enter X: ");
    scanf("%d", &x);
	 // Call the edit function with the address of 'x'
	 x = edit(&x);

    printf("%d x after increment", x); 

	
}

