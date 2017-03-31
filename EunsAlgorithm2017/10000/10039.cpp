#include <stdio.h>

int main(){
	int i, each = 0, sum = 0;
	for (i = 0; i < 5; i++){
		fscanf(stdin, "%d,", &each);
		if (each < 40)
			each = 40;
		sum += each;
	}

	printf("%d\n", sum / 5);
}