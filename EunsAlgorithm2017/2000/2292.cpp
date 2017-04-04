#include <stdio.h>

int main(){
	int n, x, result = 0, i = 0;
	fscanf(stdin, "%d,", &n);
	while (++i){
		x = 3 * i * (i - 1) + 1;
		if (n <= x)
			break;
	}
	printf("%d\n", i);
}