#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int max_count;

	if (!scanf("%d", &max_count)) {
		printf("Incorrect input\n");
		return -1;
	}

	srand(time(NULL));

    int count = 0, success_count = 0, previous = -1;

	while (count < max_count) {
		int dice = rand() % 6 + 1;

		if (dice == previous) {
			++success_count;
		}

		previous = dice;

		++count;
	}

	double probability = success_count * 100.0 / max_count;

	printf("%.2f%%\n", probability);

	return 0;
}
