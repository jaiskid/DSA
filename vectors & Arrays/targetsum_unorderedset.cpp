#include<bits/stdc++.h>
using namespace std;
vector<int> TargetUS(vector<int> arr, int sum) {
	vector<int> answer;
	unordered_set<int> s;
	for (int i = 0; i < arr.size(); i++) {
		int element_pair = sum - arr[i];
		if (s.find(element_pair) != s.end()) {
			answer.push_back(arr[i]);
			answer.push_back(element_pair);
			return answer;
		}
		s.insert(arr[i]);
	}
	return answer;
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
	int sum;
	cin >> sum;
	vector<int> answer = TargetUS(arr, sum);
	for (auto i : answer) {
		cout << i << " ";
	}
}
