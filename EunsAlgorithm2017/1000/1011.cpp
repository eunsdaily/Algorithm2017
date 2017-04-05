#include <stdio.h>

long long int get[92700];
int main(){
	//FILE* fin = fopen("inp.txt", "r");
	int ncase, count, i = 1;
	long long int result = 0;
	fscanf(stdin, "%d,", &ncase);

	for (count = 1; count < 92700; count++){
		result += i;
		if (count % 2 == 0)
			i++;
		get[count] = result;
	}

	while (ncase--){
		int fir, sec;
		fscanf(stdin, "%d %d,", &fir, &sec);
		sec -= fir;

		for (count = 1; count < 92700; count++){
			if (sec <= get[count])
				break;
		}

		printf("%d\n", count);
	}
}