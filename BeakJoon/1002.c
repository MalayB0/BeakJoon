/*
�������� ��ǥ (x1, y1)�� ���ȯ�� ��ǥ (x2, y2)�� �־�����
�������� ����� �������� �Ÿ� r1�� ���ȯ�� ����� �������� �Ÿ� r2�� �־����� ��
������� ���� �� �ִ� ��ǥ�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����. �� �׽�Ʈ ���̽��� ������ ���� �̷���� �ִ�.
�� �ٿ� x1, y1, r1, x2, y2, r2�� �־�����.
x1, y1, x2, y2�� -10,000���� ũ�ų� ����, 10,000���� �۰ų� ���� �����̰�
r1, r2�� 10,000���� �۰ų� ���� �ڿ����̴�.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int testCase;
	scanf("%d", &testCase);
	int** case1 = (int*)calloc(testCase, sizeof(int*));
	int** case2 = (int*)calloc(testCase, sizeof(int*));
	
	for (int i = 0; i < testCase; i++) {
		*(case1 + i) = (int*)calloc(testCase, sizeof(int));
		*(case2 + i) = (int*)calloc(testCase, sizeof(int));
		for (int j = 0; j < 6; j++) {
			if (j < 3) scanf("%d", case1[i][j]);
			else scanf("%d", case2[i][j]);
	}

	
	for (int i = 0; i < testCase; i++) {
		//for (int j = 0; j < 6; j++) {
		//	printf("%d", cnt[i * 6 + j]);
		//}

		if (case1[][]) {
			printf("-1");
		}
		

		printf("\n");
	}


	free(cnt);

	return 0;
}