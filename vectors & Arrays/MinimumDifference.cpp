#include<bits/stdc++.h>
using namespace std;
pair<int, int> minDifference(vector<int> a, vector<int> b) {
	int min = INT_MAX;
	int n = a.size();
	pair<int, int> np[n.size()];
	for (int i = 0; i < n; i++) {
		np[i].first = a[i];
		np[i].second = b[i];
	}
	for (auto i : np) {
		cout << i.first << "	" << i.second << endl;
	}
	return {};

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
	minDifference(a, b);
}
