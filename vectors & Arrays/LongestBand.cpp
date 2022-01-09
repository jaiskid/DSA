#include<bits/stdc++.h>
using namespace std;
int LongestBand(vector<int> arr) {
	unordered_set<int> s;
	int largest_band = 1;
	for (auto element : arr) {
		s.insert(element);
	}
	for (auto element : arr) {
		int parent_element = element - 1;
		if (s.find(parent_element) == s.end()) {
			int next_no = element + 1;
			int cnt = 1;
			while (s.find(next_no) != s.end()) {
				cnt++;
				next_no++;
			}
			largest_band = max(cnt, largest_band);
		}
	}
	return largest_band;
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
	cout << LongestBand(arr);
}