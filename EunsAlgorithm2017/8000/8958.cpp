#include <stdio.h>

int main(){
	/*
	FILE* fin;
	fin = fopen("inp.txt", "r");*/
	int N, i;
	fscanf(stdin, "%d,", &N);
	for (i = 0; i < N; i++){
		char x[80];
		int t = 0, temp = 0, sum = 0;
		fscanf(stdin, "%s", &x);
		while (t < 80){
			if (x[t] == 'O')
				sum += ++temp;
			else if (x[t] == 'X')
				temp = 0;
			else
				break;
			t++;
		}
		printf("%d\n", sum);
	}
}