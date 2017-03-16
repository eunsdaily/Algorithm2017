#include <stdio.h>

int cycle(int x){
	int first, second, last;
	first = x / 10;
	second = x % 10;
	last = first + second;
	second *= 10;
	last %= 10;
	return second + last;
}

int main(){
	int n, temp, result = 1;
	scanf("%d,", &n);
	temp = n;
	
	while (n != (temp = cycle(temp)))
		result++;
	
	printf("%d\n", result);
}