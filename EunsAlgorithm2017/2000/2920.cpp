#include <stdio.h>

int main(){
	/*FILE* fin;
	fin = fopen("inp.txt", "r");*/
	int i = 0;
	int level[8];
	for (i = 0; i < 8; i++){
		fscanf(stdin, "%d ", &level[i]);
	}

	int cad = 0, before = 0, result = 0;
	for (i = 0; i < 8; i++){
		if (i == 0){
			before = level[i];
			if (before == 1)
				cad = 1;
			else if (before == 8)
				cad = -1;
			else{
				result = 3;
				break;
			}
			continue;
		}

		if (level[i] == before + cad){
			before = level[i];
			continue;
		}
		else
			result = 3;
		before = level[i];
	}

	if (result == 3)
		printf("mixed\n");
	else if (cad == 1)
		printf("ascending\n");
	else
		printf("descending\n");
}