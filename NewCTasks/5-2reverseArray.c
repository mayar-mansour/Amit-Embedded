#include<stdio.h>
#define x 3

int main(){
	int arr[x];
	
	for(int i=0;i<x;i++){
		printf("Elements of array : %d ",i);
		scanf("%d",&arr[i]);
	}
	printf("Array elements: ");
	for(int i=x-1 ;i>=0 ;i--){
		printf("%d ",arr[i]);
	}
	
}