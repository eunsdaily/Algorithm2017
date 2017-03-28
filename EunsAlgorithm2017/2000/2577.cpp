#include <stdio.h>
int num[10] = { 0, };

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	a = a * b * c;
	while (a > 0){
		num[a % 10]++;
		a /= 10;
	}

	for (b = 0; b < 10; b++)
		printf("%d\n", num[b]);
}