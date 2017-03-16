#include <stdio.h>

int main(){
	int num, result = 0;
	scanf("%d\n", &num);

	while (num--){
		char c;
		scanf("%c", &c);
		result += c - 48;
	}

	printf("%d", result);
}