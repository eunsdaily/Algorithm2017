#include <stdio.h>

int main(){
	int n, i, result = 0;
	fscanf(stdin, "%d,", &n);
	while (++i){
		result += i;
		if (n < result)
			break;
	}
	result -= i;
	i--;
	int temp = n - result;

}