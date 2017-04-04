#include <stdio.h>

int inverse(int x){
	int ans = 0;
	while (x > 0){
		ans *= 10;
		ans += x % 10;
		x /= 10;
	}
	return ans;
}

int main(){
	int a, b;
	fscanf(stdin, "%d %d", &a, &b);
	a = inverse(a);
	b = inverse(b);

	if (a > b)
		printf("%d\n", a);
	else {
		printf("%d\n", b);
	}
}