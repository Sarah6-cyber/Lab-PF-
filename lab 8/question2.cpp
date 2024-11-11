#include<stdio.h>
int main(){
	int matrix[4][4];
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			printf("enter grade for student %d, for subject %d\n",i+1,i+1);
			scanf("%d",&matrix[i][j]);
			
			if (matrix[i][j]<0){
				matrix[i][j]=0;
			}
		}
	}
	printf("correct grade matrix\n");
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			printf(" %d ",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}