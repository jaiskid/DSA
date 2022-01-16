//O(n^2)
#include<bits/stdc++.h>
using namespace std;
pair<int, int> minDifference(vector<int> a, vector<int> b) {
	int min = INT_MAX;
	int n = a.size();
	pair<int, int> np;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int currentDiff = abs(a[i] - b[j]);
			if (currentDiff < min) {
				min = currentDiff;
				np.first = a[i];
				np.second = b[j];
			}
		}
	}
	return np;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int> a, b;
	a.resize(n);
	b.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	auto answer = minDifference(a, b);
	cout << answer.first << "	" << answer.second << "	";
}
