#include<bits/stdc++.h>
using namespace std;
#define INT_SIZE 32
int getSingle(vector<int> arr, int n) {
	int result = 0;
	int x , sum = 0;
	int ans = 0;
	for (int i = 0; i < INT_SIZE; i++) {
		sum = 0;
		for (int j = 0; j < n; j++) {
			if (arr[j] & (1 << i)) {
				sum++;
			}
		}
		if (sum % 3 == 1) {
			ans += (1 << i);
		}
	}
	return ans;
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
	auto ans = getSingle(arr, n);
	cout << ans;
}
