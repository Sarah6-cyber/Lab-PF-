#include<stdio.h>
#define rows 3
#define cols 3
int main(){
	int matrix[rows][cols];
	for (int i=0; i<rows; i++){
		for (int j=0; j<cols; j++){
			printf("enter the score for participant %d, for activity %d\n",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	int sum_row[rows]={0};
	int sum_col[cols]={0};
	for (int i=0; i<rows; i++){
		for (int j=0; j<cols; j++){
			sum_row[i]+=matrix[i][j];
		}
	}
	for (int j=0; j<cols; j++){
		for (int i=0; i<rows; i++){
			sum_col[j]+=matrix[i][j];
		}
	}
    for (int i=0; i<rows; i++){
		printf("total score of participant %d: %d\n",i+1,sum_row[i]);
	}
	for (int j=0; j<cols; j++){
		printf("total score of all participants in activity %d: %d\n",j+1,sum_col[j]);
	}
	return 0;
	
}