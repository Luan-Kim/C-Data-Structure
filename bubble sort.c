#include <stdio.h>
#define N 10

int main(){
	int num[N] = {24, 86, 12, 78, 61, 45, 88, 91, 34, 55};
	int i, j, temp;
		for(i = 0; i < 4; i++){
			for(j = 0; j<N-i; j++){
				if(num[j] > num[j+1]){
					temp = num[j];
					num[j] = num[j+1];
					num[j+1] = temp;
				}
			}
		}
		for(i = 0; i < N; i++){
			printf("%d ", num[i]);
		}
}
