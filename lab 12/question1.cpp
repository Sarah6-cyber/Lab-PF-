#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int num;
	int *num_grades;
	int **grades;
	printf("enter number of students: ");
	scanf("%d",&num);
	num_grades=(int*)malloc(num*sizeof(int));
	grades=(int**)malloc(num*sizeof(int*));
	if (*num_grades==NULL || **grades==NULL){
		printf("memory allocation failed.");
		return 1;
	}
	for (int i=0; i<num; i++){
		printf("enter number of grades for student %d: ",i+1);
		scanf("%d",&num_grades[i]);
	grades[i]=(int*)malloc(num_grades[i]*sizeof(int));
	if (grades==NULL){
		printf("memory allocation failed");
		return 1;
	}
	printf("enter grades for student %d:\n",i+1);
	for (int j=0; j<num_grades[i]; j++){
		printf("grade %d: \n",j+1);
		scanf("%d",&grades[i][j]);
	}
}
	printf("grades you entered:\n");
	for (int i=0; i<num; i++){
		printf("student %d: ",i+1);
		for (int j=0; j<num_grades[i]; j++){
			printf("%d\t",grades[i][j]);
		}
		printf("\n");
	}
	for (int i=0; i<num; i++){
		free(grades[i]);
	}
	free(grades);
	free(num_grades);
	return 0;
}