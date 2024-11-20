#include<stdio.h>
void recursiveBubbleSort(int array[], int size){
    if (size==1){
        return;
    }
    for (int i=0; i<size-1; i++) {
        if (array[i]>array[i+1]){
            int temp=array[i];
            array[i]=array[i + 1];
            array[i+1]=temp;
        }
    }
}

int main() {
    int arr[100];
    int arr_size;
    printf("Enter the size of the array: \n");
    scanf("%d", &arr_size);
    printf("Enter %d elements:\n", arr_size);
    for (int i = 0; i<arr_size; i++) {
        scanf("%d", &arr[i]);
    }
    recursiveBubbleSort(arr, arr_size);
    printf("Sorted array: ");
    for (int i=0; i<arr_size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
