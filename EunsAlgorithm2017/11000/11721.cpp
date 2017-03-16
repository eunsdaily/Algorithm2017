#include <stdio.h>

int main(){
	int count = 0;
	char c;
	while (scanf("%c", &c) != EOF){
		printf("%c", c);
		if (++count == 10){
			printf("\n");
			count = 0;
		}
	}
}