#include <stdio.h>

int main(){
	//FILE* fin = fopen("inp.txt", "r");
	int  x, num = 0;
	char c;

	while (fscanf(stdin, "%c,", &c) != EOF && c != '\n'){
		x = c - 'A';
		if (x > 17)
			x--;
		if (x > 23)
			x--;
		x = x / 3 + 3;
		num += x;
	}

	printf("%d\n", num);
}
