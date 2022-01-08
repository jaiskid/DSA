#include<bits/stdc++.h>
using namespace std;
vector<int> Target(vector<int> arr, int sum) {
	int s = 0;
	int e = arr.size() - 1;
	vector<int> answer;
	while (s < e) {
		if (arr[s] + arr[e] == sum) {
			answer.push_back(arr[s]);
			answer.push_back(arr[e]);
			s++;
			e--;
		}
		else if (arr[s] + arr[e] > sum) {
			e--;
		}
		else {
			s++;
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
	sort(arr.begin(), arr.end());
	int sum;
	cin >> sum;
	vector<int> answer = Target(arr, sum);
	for (auto i : answer) {
		cout << i << "	";
	}
}
