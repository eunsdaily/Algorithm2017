#include <stdio.h>

int main(){
	int n, i = 0, result = 0;
	fscanf(stdin, "%d,", &n);
	while (++i){
		result += i;
		if (n <= result)
			break;
	}
	int lar = i - (result - n), sm = (i + 1) -lar;
	if (i % 2 == 0){ // i Â¦¼ö
		printf("%d/%d\n", lar, sm);
	}
	else { // i È¦¼ö
		printf("%d/%d\n", sm, lar);
	}
}