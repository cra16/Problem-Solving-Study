#include <stdio.h>

#define LENGTH 100

int main() {
	int min, max;
	int isDecimal = 0;

	int arr[LENGTH] = {0};
	int sum = 0;

	int i, j, s = 0;

	scanf("%d %d", &min, &max);

	for(i = min ; i <= max ; i++) {
		for(j = 1 ; j <= i ; j++) {
			if(i % j == 0)
				isDecimal++;
		}

		if(isDecimal == 2)
			arr[s++] = j - 1;

		isDecimal = 0;
	}

	if(arr[0] == 0) {
		printf("-1\n");
		return 0;
	}

	for(i = 0; i < LENGTH ; i++) {
		if(arr[i] == 0)
			break;

		sum += arr[i];
	}

	printf("%d\n%d\n", sum, arr[0]);

	return 0;
}
