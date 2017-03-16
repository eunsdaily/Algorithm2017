#include <stdio.h>
int degree[1000];

int main(){
	int caseNum;
	scanf("%d,", &caseNum);
	while (caseNum--){
		int i, num, count = 0;
		float result = 0;
		scanf("%d,", &num);
		for (i = 0; i < num; i++){
			int t;
			scanf("%d,", &t);
			degree[i] = t;
			result += t;
		}
		result /= num;
		for (i = 0; i < num; i++){
			if (degree[i] > result)	count++;
		}
		printf("%.3f%%\n", (count / (float)num) * 100);
	}
}