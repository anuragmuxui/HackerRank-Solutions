#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const void *a, const void *b) {
    const char **ia = (const char **)a;
    const char **ib = (const char **)b;
    return strcmp(*ia, *ib);
}

void swap(char **a, char **b) {
    char *t = *a;
    *a = *b;
    *b = t;
}

int find_ceil(char **s, char *first, int l, int h) {

    int ceil_index = l;

    for (int i = l+1; i <= h; i++)
        if ((strcmp(s[i], first) > 0) && (strcmp(s[i], s[ceil_index]) < 0))
            ceil_index = i;
 
    return ceil_index;
}

int next_permutation(int n, char **s) {
    int theres_more = 1;
    int i;

    for (i = n-2; i >= 0; i--)
        if (strcmp(s[i], s[i+1]) < 0)
            break;

    if (i == -1) {
        theres_more = 0;
    } else {
 
        int ceil_index = find_ceil(s, s[i], i + 1, n - 1);

        swap(&s[i], &s[ceil_index]);

        qsort(s + i + 1, n - i - 1, sizeof(s[0]), lexicographic_sort);
    }
    
    return theres_more;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
