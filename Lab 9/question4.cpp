#include<stdio.h>
#include<string.h>
int main(){
	char Names[6][20]={"Diana","Stacy","Sara","Andrew","John","Jennifer"};
	char input_Name[20];
	printf("enter a name\n");
	scanf("%s",input_Name);
	int check=0;
	int found=0;
	for (int i=0; i<6; i++){
		if (check==strcmp(input_Name,Names[i])){
			found=1;
			break;
		}
	}
	if (found==1){
		printf("Found!");
	}
	else {
		printf("Not found!");
	}
	return 0;
}