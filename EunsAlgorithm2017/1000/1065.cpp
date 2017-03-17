#include <stdio.h>
using namespace std;

bool hansu(int t){
	int first, second, diff;
	first = second = 0;
	first = t % 10;
	second = (t = t / 10) % 10;
	t /= 10;
	diff = first - second;
	while (t){
		first = second;
		second = t % 10;
		t /= 10;

		if (diff != (first - second))
			return 0;
	}
	return 1;
}
int main(){
	int N, i, result;
	scanf("%d,", &N);
	if (N < 100)
		result = N;
	else{
		result = 99;
		for (i = 110; i <= N; i++){
			result += hansu(i);
		}
	}
	printf("%d", result);
}