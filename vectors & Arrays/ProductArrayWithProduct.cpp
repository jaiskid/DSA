#include<bits/stdc++.h>
using namespace std;
vector<int> MinDifferenceWithProductArr(vector<int>arr) {
	int n = arr.size();
	int temp = 1;
	vector<int> prod(n, 1);
	for (int i = 0; i < n; i++) {
		prod[i]*= temp;
		temp *= arr[i];
	}
	temp = 1;
	for (int i = n - 1 ; i >= 0; i--) {
		prod[i]*= temp;
		temp *= arr[i];
	}
	return prod;
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
	auto answer = MinDifferenceWithProductArr(arr);
	for (auto i : answer) {
		cout << i << "	";
	}
}
