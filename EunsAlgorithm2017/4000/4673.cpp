#include <stdio.h>
#include <algorithm>
using namespace std;
#define MAX 10000

int notselfNum[MAX - 1];
int d(int n){
	int div = MAX * 10, result = n;
	while (n){
		result += n % 10;
		n /= 10;
	}
	return result;
}

int main(){
	int i, arri = 0;
	for (i = 1; i < MAX; i++){
		notselfNum[i-1]=d(i);
	}
	sort(notselfNum, notselfNum + MAX - 1);


	for (i = 1; i < MAX - 1; i++){
		if (i > notselfNum[arri]) i--;
		if (notselfNum[arri] > 10000) break;
		if (i == notselfNum[arri]){
			arri++;
			continue;
		}
		if (i < notselfNum[arri]){
			printf("%d\n", i);
			continue;
		}
	}
}