#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

string star[4000] = { " ", };

void setfirststar(){
	star[0] = "  *  ";
	star[1] = " * * ";
	star[2] = "*****";
}

void printstar(int n){
    int i;
	for (i = 0; i < n; i++){
		printf("%s\n", star[i].c_str());
	}
}
void setstar(int leng){
	int i;
	for (i = 0; i < leng; i++){
		star[leng+i] = star[i];
		star[leng + i].append(" ");
	}
	for (i = 0; i < leng; i++){
		star[leng + i].append(star[i]);
	}

	for (i = 0; i < leng; i++){
		star[i].append(leng, ' ');
		star[i].insert(star[i].begin(), leng, ' ');
	}
}

int main(){
	int N, Ndiv3, i;
	scanf("%d,", &N);

	setfirststar();
	if (N == 0){
		return 0;
	}
	else if (N == 3){
		printstar(N);
		return 0;
	}
	else {
		Ndiv3 = (int)sqrt(N / 3);
		for (i = 6; i <= N; i = i * 2){
			setstar(i/2);
		}
	}

	printstar(N);
}
