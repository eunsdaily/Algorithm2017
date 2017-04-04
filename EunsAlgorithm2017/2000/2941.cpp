#include <stdio.h>
using namespace std;

char match[][4] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
int index[2] = { -1, -1 }, count = 0, result = 0, ind = 0;

void getindexZero(char c){
	int i;
	for (i = 0; i < 8; i++){
		if (c < match[i][count])
			break;
		if (c == match[i][count]){
			index[ind++] = i;
		}
	}
	if (ind > 0)
		count++;
}
int main(){
	//FILE* fin = fopen("inp.txt", "r");
	char c;
	int i;

	while (fscanf(stdin, "%c,", &c) != EOF && c != '\n'){
		result++;
		if (count == 0){
			getindexZero(c);
		}
		else if (count == 1){
			int temp = 0;
			for (i = 0; i < ind; i++){
				if (c == match[index[i]][count]){
					if (match[index[i]][count + 1] != '\0'){
						count++;
						ind = 1;
						index[0] = index[i];
					}
					else {
						result--;
						ind = 0;
						count = 0;
						break;
					}
				}
				else
					temp++;
			}
			if (ind != 0 && temp == ind){
				count = 0;
				ind = 0;
				getindexZero(c);
			}
		}
		else if (count == 2) {
			if (c == match[index[0]][count]){
				result = result - 2;
				count = 0;
				ind = 0;
			}
			else{
				count = 0;
				ind = 0;
				getindexZero(c);
			}
		}
	}
	
	printf("%d\n", result);
}