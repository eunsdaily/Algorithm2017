#include <stdio.h>
int bagNumb = 0;

int bag3or5(int n){
	if (n > 5)
		return 1 + bag3or5(n - 5);

}

int main(){
	int N, modN;
	scanf("%d", &N);
	

}