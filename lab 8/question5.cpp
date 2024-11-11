#include <stdio.h>
void columnInAscending(int matrix[4][4], int col){
    for (int i=0; i<3; i++){
        for (int j =i+1; j<4; j++){
            if (matrix[i][col]>matrix[j][col]){
                int temp = matrix[i][col];
                matrix[i][col]=matrix[j][col];
                matrix[j][col]=temp;
            }
        }
    }
}

int main(){
    int matrix[4][4];
    printf("Enter the elements of the 4x4 matrix where each row represents a team, and each column represents a round\n");
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            printf("Element [%d][%d]: ",i+1, j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int col=0; col<4; col++){
        columnInAscending(matrix,col);
    }
    printf("\nMatrix after sorting each column in ascending order is:\n");
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}