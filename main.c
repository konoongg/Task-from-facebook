#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int size, number;
	scanf_s("%d%d", &size, &number);
	int* numbers = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; ++i) {
		scanf_s("%d", &numbers[i]);
	}
	int min = 0;
	int max = size - 1;
	while (min != max) {
		if (numbers[min] + numbers[max] == number) {
			printf("%d %d", numbers[min], numbers[max]);
			return 0;
		}
		else if (numbers[min] + numbers[max] > number) {
			--max;
		}
		else {
			++min;
		}
	}

	printf("No solutions");
	return 0;
}

