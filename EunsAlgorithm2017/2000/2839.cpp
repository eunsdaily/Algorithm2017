#include <stdio.h>
int bagNumb = 0;

int main(){
	int N, Ndiv5, result;
	scanf("%d", &N);
	
	Ndiv5 = N / 5;
	while ((N - 5 * Ndiv5) % 3 != 0)
		Ndiv5--;

	result = (N - 5 * Ndiv5) / 3 + Ndiv5;
	if (Ndiv5 < 0)
		printf("-1");
	else
		printf("%d", (N - 5 * Ndiv5) / 3 + Ndiv5);
}