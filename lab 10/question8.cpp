#include<stdio.h>
void printArray(int arr[], int size){
    if (size==0){
        return;
    }
    printf("%d ", arr[0]);
    printArray(arr+1, size-1);
}

int main(){
    int array[100];
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i=0; i<size; i++){
        scanf("%d", &array[i]);
    }
    printf("Array elements: ");
    printArray(array, size);
    printf("\n");
    return 0;
}
