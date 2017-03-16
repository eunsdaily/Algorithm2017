#include <stdio.h>

int main(){
	int i, max = 0, n;
	float result = 0;
	scanf("%d,", &n);
	for (i = 0; i < n; i++){
		int x;
		scanf("%d,", &x);
		result += x;
		if (max < x)
			max = x;
	}

	if (result == 0){
		printf("0");
		return 0;
	}
	result = (result * 100.0) / (n * max);
	printf("%.2f", result);
}