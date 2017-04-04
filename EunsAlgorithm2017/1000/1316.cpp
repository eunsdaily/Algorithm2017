#include <stdio.h>

int main(){
	//FILE* fin = fopen("inp.txt", "r");

	int N, count = 0;
	fscanf(stdin, "%d ", &N);
	while (N--){
		char c, bef;
		int alpha[26] = { 0, }, end = 0;
		fscanf(stdin, "%c,", &bef);
		alpha[bef - 'a']++;
		while (fscanf(stdin, "%c,", &c) != EOF &&  c != '\n'){
			if (bef == c)
				alpha[c - 'a']++;
			else{
				if (alpha[c - 'a'] != 0)
					end = -1;
				else 
					alpha[c - 'a']++;
			}
			bef = c;
		}

		if (end != -1)
			count++;
	}
	printf("%d\n", count);
}