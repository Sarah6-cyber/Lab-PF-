#include<stdio.h>
#include<stdlib.h>
int main(){
	int T_cases;
	scanf("%d",&T_cases);
	while (T_cases--){
		int N;
		scanf("%d",&N);
		int A[N];
		int freq[10002]={0};
		for (int i=0; i<N; i++){
			scanf("%d",&A[i]);
			freq[A[i]]++;
		}
		int max_freq=0;
		int number=10002;
		for (int i=1; i<=10001; i++){
			if (max_freq<freq[i]){
				max_freq=freq[i];
				number=i;
			}
			else if(max_freq==freq[i] && number>i){
				number=i;
			}
		}
		printf("%d\n",number);
	}
	return 0;
}