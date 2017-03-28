#include <stdio.h>
using namespace std;

int main(){
	//FILE* fin;
	//fin = fopen("inp.txt", "r");
	char x, b;
	int i = 0;
	
	scanf("%c,", &b);
	//fscanf(fin, "%c,", &b);

	while (scanf("%c,", &x) != EOF){
	//while (fscanf(fin, "%c,", &x) != EOF){
		if (x != '\n' && b != '\n' && b != ' ' && x == ' ')
			i++;
		b = x;
	}
	if (b != '\n' && b != EOF && b != ' ')
		i++;
	printf("%d\n", i);
}