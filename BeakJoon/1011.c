#include <stdio.h>
#include <math.h>

int main() {
	int testCase, distance1, distance2;

	scanf("%d", &testCase);
	int* distance = (int*)malloc(sizeof(int) * testCase);

	for (int i = 0; i < testCase; i++) {
		scanf("%d %d", &distance1, &distance2);
		distance[i] = abs(distance2 - distance1);
	}

	for (int i = 0; i < testCase; i++) {
		printf("%d\n", (int)ceil(2 * sqrt(distance[i]) - 1));
	}

}