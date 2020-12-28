/*
3개의 정수를 입력받고 중간값 출력
*/

#include <stdio.h>

void printMid();

int main() {
	printMid();
	return 0;
}
void printMid() {
	int ary[3] = { 0 };
	scanf("%d %d %d", &ary[0], &ary[1], &ary[2]);
	int temp;
	for (int i = 0; i < sizeof(ary) / sizeof(int); i++) {
		for (int j = 0; j < (sizeof(ary) / sizeof(int)) - 1; j++) {
			if (ary[j+1] > ary[j]){
				temp = ary[j+1];
				ary[j+1] = ary[j];
				ary[j] = temp;	
			}
			
		}

	}

	for (int i = 0; i < sizeof(ary) / sizeof(int); i++) {
		printf("%d ", ary[i]);
	}

	printf("\n%d\n", ary[1]);





}