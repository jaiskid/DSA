#include<bits/stdc++.h>
using namespace std;
int singleOne(vector<int>arr, int n) {
	unordered_map<int, int> mp;
	for (auto i : arr) {
		mp[i]++;
	}
	int ans;
	for (auto i : mp) {
		if (i.second == 1) {
			ans = i.first;
			break;
		}
	}
	return ans;
}
int singleOneBit(vector<int> arr, int n) {
	int res = 0;
	for (int i = 0; i < n; i++) {
		res ^= arr[i];
	}
	return res;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int>arr;
	arr.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << singleOne(arr, n) << endl;
	cout << singleOneBit(arr, n) << endl;
}
