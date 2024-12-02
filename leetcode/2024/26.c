#include <stdio.h>

int solve(int* arr, int n, int val) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] != arr[k]) {
			k++;
			arr[k] = arr[i];
		}
	}

	return k + 1;
}


int main() {
	int arr[] = { 1, 1, 2, 2, 3, 3 };
	int n = 6;

	int k = solve(arr, n, 2);

	printf("%d\n", k);
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}
