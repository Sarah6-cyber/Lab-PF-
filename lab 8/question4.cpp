#include <stdio.h>

int main() {
    int rows;
    int cols;
    printf("Enter the number of rows (rows): ");
    scanf("%d", &rows);
    printf("Enter the number of columns (cols): ");
    scanf("%d", &cols);
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int result[rows][cols];
    printf("Enter elements of the first matrix:\n");
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("Element [%d][%d]: ",i+1, j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("Element [%d][%d]: ",i+1, j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            result[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    printf("Resulting matrix after addition:\n");
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}