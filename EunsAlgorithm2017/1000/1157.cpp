#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

int alpha[26];

int isDuplicated(){
	int temp[26];
	memcpy(temp, alpha, sizeof(alpha));
	sort(temp, temp + 26);
	if (temp[25] == temp[24])
		return -1;
	return temp[25];
}

int main(){
	//FILE* fin = fopen("inp.txt", "r");

	char c;
	int i, dup;
	while (fscanf(stdin, "%c,", &c) != EOF){
		if (c > 90)
			alpha[c - 'a']++;
		else
			alpha[c - 'A']++;
	}

	dup = isDuplicated();
	if (dup == -1)
		printf("?\n");
	else{
		for (i = 0; i < 26; i++){
			if (alpha[i] == dup)
				break;
		}
		printf("%c\n", i + 'A');
	}


}
