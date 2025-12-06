#include "array_utils.h"

void print_array_int(int a[], int sz)
{
	for (int i = 0; i < sz; ++i)
	{
		char c = i == sz - 1 ? '\0' : '\t';

		printf("%d%c", a[i], c);
	}
}

void search_min_max_int(int a[], int sz, int* min, int* max)
{
	*min = *max = a[0];

	for (int i = 1; i < sz; ++i)
	{
		if (a[i] < *min)
		{
			*min = a[i];
		} else if (a[i] > *max)
		{
			*max = a[i];
		}
	}
}

int find_min_index_of_i(int a[], int sz, int offset)
{
	int min_id = offset;

	for (int j = offset + 1; j < sz; ++j)
	{
		if (a[j] < a[min_id])
		{
			min_id = j;
		}
	}

	return min_id;
}

void select_sort_int(int a[], int sz)
{
	for (int i = 0; i < sz - 1; ++i)
	{
		int min_id = find_min_index_of_i(a, sz, i);

		if (min_id > i)
		{
			swap_int(&a[i], &a[min_id]);
		}
	}
}

void swap_int(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
