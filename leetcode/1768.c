/**
 * Merge two strings by adding letters in alternate order, starting with str1.
 *
 * abc pqr
 * apbqcr
 *
 * ab pqrs
 * apbqrs
 *
 */

/**
 * get length of c-string
 * iterate over c-string
 * return a cstring from a function
 * void* are implicitly cast to whatever type they are assigned to
 *
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * 2023.12.23, by Zach Leach
 *
 */
char* solve(char* s1, char* s2) {
	int n, m;
	n = strlen(s1), m = strlen(s2);

	char* res = calloc(n + m + 1, sizeof(char));
	if (res == NULL) {
		return 0;
	}

	int i = 0, j = 0, k = 0;
	while (i < n && j < m) {
		res[k++] = s1[i++];
		res[k++] = s2[j++];
	}

	while (i < n) {
		res[k++] = s1[i++];
	}

	while (j < m) {
		res[k++] = s2[j++];
	}

	return res;
}

int main() {
	char* arg1 = "aaaaaaa";
	char* arg2 = "bbb";
	char* res = solve(arg1, arg2);
	printf("%s", res);
}
