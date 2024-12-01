#include<stdio.h>
#include<stdlib.h>
void makeEven(int *arr, int size){
	for (int i=0; i<size; i++){
		if (arr[i]%2!=0){
			arr[i]-=1;
		}
	}
}

int main(){
	int size;
	int *arr;
	printf("enter size of array: ");
	scanf("%d",&size);
	arr=(int*)malloc(size*sizeof(int));
	if (*arr==NULL){
		printf("memory allocation failed");
		return 1;
	}
	for (int i=0; i<size; i++){
		printf("enter number %d: \n",i+1);
		scanf("%d",&arr[i]);
	}
	makeEven(arr, size);
	for (int i=0; i<size; i++){
		printf("numbers after even function are: %d\n",arr[i]);
	}
	free(arr);
	return 0;
	
}