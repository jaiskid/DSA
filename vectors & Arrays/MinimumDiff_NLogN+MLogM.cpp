#include<bits/stdc++.h>
using namespace std;
pair<int, int> MinDiff(vector<int>a, vector<int>b) {
	int i = 0;
	int j = 0;
	int n = a.size();
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	pair<int, int> answer;
	int min = INT_MAX;
	while (i < n && j < n) {
		int CurrentMin = abs(a[i] - b[j]);
		if (CurrentMin < min) {
			min = CurrentMin;
			answer.first = a[i];
			answer.second = b[j];
		}
		if (a[i] < b[j]) {
			i++;
		}
		else {
			j++;
		}
	}
	return answer;
}
#ifndef ONLINE_JUDGE
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	auto answer = MinDiff(a, b);
	cout << answer.first << "	" << answer.second;
}
