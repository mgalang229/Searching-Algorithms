#include <bits/stdc++.h>

using namespace std;

template <class T>
int seqSearch(const T list[], int length, const T &item) {
	int first = 0;
	int last = length - 1;
	int mid;
	bool found = false;
	while (first <= last && !found) {
		mid = (first + last) / 2;
		if (list[mid] == item) {
			found = true;
		} else if (list[mid] > item) {
			last = mid - 1;
		} else {
			first = mid + 1;
		}
	}
	if (found) {
		return mid;
	} else {
		return -1;
	}
}
	
int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << seqSearch(arr, n, 4) << '\n';
	return 0;
}
