#include<bits/stdc++.h>
using namespace std;
int MountainPeek(vector<int>arr) {
	int largest_peek = 0;
	for (int i = 1; i <= arr.size() - 2; i++) {
		//Check a[i] is peek or not
		if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
			int cnt = 1;
			int j = i;
			//cnt backwards
			while (j >= 1 and arr[j] > arr[j - 1]) {
				j--;
				cnt++;
			}
			//cnt forwards
			while (i <= arr.size() - 2 and arr[i] > arr[i + 1]) {
				i++;
				cnt++;
			}
			largest_peek = max(largest_peek, cnt);
		} else {
			i++;
		}
	}
	return largest_peek;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int> arr;
	arr.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (auto i : arr) {
		cout << i << "	";
	}

	cout << MountainPeek(arr);
}
