#include<bits/stdc++.h>
using namespace std;
int MaximumSubarraysum(vector<int> &arr) {
	int ms = INT_MIN;
	int cs = 0;
	int n = arr.size();
	for (int i = 0; i < n; i++) {
		cs += arr[i];
		if (cs <= 0) {
			cs = 0;
		}
		ms = max(cs, ms);
	}
	return ms;
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
		cout << i << endl;
	}
	cout << MaximumSubarraysum(arr);
}
