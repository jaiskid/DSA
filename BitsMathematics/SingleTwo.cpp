#include<bits/stdc++.h>
using namespace std;
pair<int, int> SingleTwoBits(vector<int>arr, int n) {
	pair<int, int> ans;
	int res = 0;
	for (int i = 0; i < n; i++) {
		res ^= arr[i];
	}
	int  x = 0;
	int y = 0;
	int singleBits = res & ~(res - 1);
	cout << singleBits << endl;
	for (int i = 0; i < n; i++) {
		if (singleBits & arr[i]) {
			x = x ^ arr[i];
		}
		else {
			y = y ^ arr[i];
		}
	}
	ans.first = x;
	ans.second = y;
	return ans;
}
pair<int, int> SingleTwoBitshashmap(vector<int>arr, int n) {
	pair<int, int> ans;
	vector<int> answer;
	unordered_map<int, int> mp;
	for (auto i : arr) {
		mp[i]++;
	}
	for (auto i : mp)
		if (i.second == 1) {
			answer.push_back(i.first);
		}
	ans.first = answer[0];
	ans.second = answer[1];
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
	auto ans = SingleTwoBits(arr, n);
	auto answer = SingleTwoBitshashmap(arr, n);
	cout << ans.first << "	" << ans.second << endl;
	cout << answer.first << "	" << answer.second << endl;
	cout << (1<<3);
}
