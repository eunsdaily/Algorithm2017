#include <stdio.h>

int main(){
	//FILE* fin = fopen("inp.txt", "r");
	int count;
	fscanf(stdin, "%d,", &count);
	while (count--){
		int rep, i;
		char c;
		fscanf(stdin, "%d ", &rep);
		while (fscanf(stdin, "%c,", &c) != EOF && c != '\n'){
			for (i = 0; i < rep; i++)
				printf("%c", c);
		}
		printf("\n");
	}
}