#include<bits/stdc++.h>
using namespace std;
vector<int> SubarraySortProb(vector<int>&arr, vector<int>&answer) {
	vector<int> tempArray(arr);
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] != tempArray[i]) {
			answer.push_back(i);
			break;
		}
	}
	for (int i = arr.size(); i > 0; i--) {
		if (arr[i] != tempArray[i]) {
			answer.push_back(i);
			break;
		}
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
	vector<int> answer;
	SubarraySortProb(arr, answer);
	for (auto i : answer) {
		cout << i << " ";
	}
}
