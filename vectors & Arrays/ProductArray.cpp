#include<bits/stdc++.h>
using namespace std;
vector<int> productArray(vector<int> arr) {

	//Create an output Array
	int n = arr.size();
	vector<int> left(n), right(n, 1);
	vector<int> product(n);
	int max = 1;
	if (n == 1) {
		cout << 0;
		return {};
	}
	left[0] = 1;
	right[n - 1] = 1;
	for (int i = 1; i < n; i++) {
		left[i] = arr[i - 1] * left[i - 1];
	}
	for (int j = n - 2; j >= 0; j--) {
		right[j] = arr[j + 1] * right[j + 1];
	}
	for (int i = 0 ; i < n; i++) {
		product[i] = left[i] * right[i];
	}
	return product;
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
	auto answer = productArray(arr);
	for(auto i : answer){
		cout << i << "	";
	}
}
