#include <bits/stdc++.h>

using namespace std;

template <class T>
int seqSearch(const T list[], int length, const T &item) {
	int loc;
	bool found = false;
	for (loc = 0; loc < length; loc++) {
		if (list[loc] == item) {
			found = true;
			break;
		}
	}
	if (found) {
		return loc;
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
