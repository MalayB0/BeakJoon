/*
조규현의 좌표 (x1, y1)와 백승환의 좌표 (x2, y2)가 주어지고
조규현이 계산한 류재명과의 거리 r1과 백승환이 계산한 류재명과의 거리 r2가 주어졌을 때
류재명이 있을 수 있는 좌표의 수를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스는 다음과 같이 이루어져 있다.
한 줄에 x1, y1, r1, x2, y2, r2가 주어진다.
x1, y1, x2, y2는 -10,000보다 크거나 같고, 10,000보다 작거나 같은 정수이고
r1, r2는 10,000보다 작거나 같은 자연수이다.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int bigger(int a, int b);
int main() {
	int testCase;
	scanf("%d", &testCase);
	int** case1 = (int*)calloc(testCase, sizeof(int*));
	int** case2 = (int*)calloc(testCase, sizeof(int*));

	for (int i = 0; i < testCase; i++) {
		
		*(case1 + i) = (int*)calloc(3, sizeof(int));
		*(case2 + i) = (int*)calloc(3, sizeof(int));
		
		for (int j = 0; j < 6; j++) {
			if (j < 3) scanf("%d", &case1[i][j]);
			else scanf("%d", &case2[i][j]);
		}
	}
	
	for (int i = 0; i < testCase; i++) {
		
		if ((case1[i][0] == case2[i][0]) &&
			(case1[i][1] == case2[i][1]) &&
			(case1[i][2] == case2[i][2])) {
			printf("%d",-1);
		}
		// inner circle
		else if (sqrt((case1[i][0] - case1[i][0])^2 +
					  (case1[i][1] - case1[i][1])^2)
				< bigger(case1[i][2], case1[i][2])) {
			printf("inner");
		}
		else {
			printf("outter");
		}

	}
	



	for (int i = 0;  i < testCase ; i++) {
		for (int j = 0; j < 6; j++) {
			if (j < 3) printf("%-2d", case1[i][j]);
			else printf("%-2d", case2[i][j]);
		}
		printf("\n");
	}




	for (int i = 0; i < testCase; i++) {
		free(case1[i]);
		free(case2[i]);
	}
	free (case1);
	free (case2);
	
	return 0;
}

int bigger(int a , int b) {
	if (a > b) return a;
	else return b;
}
