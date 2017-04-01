#include <stdio.h>

int alpha[26] = { -1, };

int main(){
	//FILE* fin = fopen("inp.txt", "r");
	
	int i, ind = 0;
	char c;
	
	for (i = 0; i < 26; i++)
		alpha[i] = -1;

	while (fscanf(stdin, "%c,", &c) != EOF){
		int temp = c - 'a';
		if (alpha[temp] == -1)
			alpha[temp] = ind;
		ind++;
	}

	for (i = 0; i < 26; i++){
		printf("%d ", alpha[i]);
	}
}