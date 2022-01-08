#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> Triplet(vector<int>arr, int sum) {
	sort(arr.begin(), arr.end());
	vector<vector<int>> answer;
	for (int i = 0; i <= arr.size() - 3; i++) {
		int j = i + 1;
		int k = arr.size() - 1;
		while (j < k) {
			if (arr[i] + arr[j] + arr[k] == sum) {
				answer.push_back({arr[i], arr[j], arr[k]});
				j++;
				k--;
			}
			else if (arr[i] + arr[j] + arr[k] < sum) {
				j++;
			}
			else {
				k--;
			}
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
	int sum;
	cin >> sum;
	vector<vector<int>> answer = Triplet(arr, sum);
	for (auto i : answer) {
		for (auto j : i) {
			cout << j << "	";
		}
		cout << endl;
	}
}
