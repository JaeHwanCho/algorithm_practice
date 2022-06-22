#include <iostream>

using namespace std;

void swap(int* arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void Quicksort(int* arr, int start, int end) {
	if (start >= end)
		return;
	int pivot = arr[start];
	int low = start + 1;
	int high = end;
	while (low <= high) {
		while (low <= end && arr[low] <= pivot)
			low++;
		while (high >= start && arr[high] > pivot)
			high--;
		if (low < high)
			swap(arr, low, high);
	}
	swap(arr, start, high);
	Quicksort(arr, start, high - 1);
	Quicksort(arr, high + 1, end);
}

int num_2750() {
	int count;
	int num[1001];

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> num[i];
	}
	Quicksort(num, 0, count-1);

	for (int i = 0; i < count; ++i)
		cout << num[i] << " ";

	return 0;
}