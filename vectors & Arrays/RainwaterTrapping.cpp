#include<bits/stdc++.h>
using namespace std;
int RainwaterTrapping(vector<int> height) {
	if (height.size() <= 2) {
		return 0;
	}
	int n = height.size();
	vector<int> leftMax(height.size(), 0);
	vector<int> rightMax(height.size(), 0);
	leftMax[0] = height[0];
	rightMax[n - 1] = height[n - 1];
	int StoreWater = 0;
	for (int i = 1; i < n; i++) {
		leftMax[i] = max(leftMax[i - 1], height[i]);
		rightMax[n - i - 1] = max(height[n - i - 1], rightMax[n - i]);
	}
	for (int i = 0; i < n; i++)
		StoreWater += min(leftMax[i], rightMax[i]) - height[i];
	return StoreWater;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int> height;
	height.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}
	cout << RainwaterTrapping(height);
}
