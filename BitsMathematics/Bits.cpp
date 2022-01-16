#include<bits/stdc++.h>
using namespace std;
int GetIthBits(int n, int i) {
	int mask = (1 << i);
	return mask & n;
}
int setBits(int n, int i) {
	int mask = (1 << i);
	return mask | n;
}
int clearbits(int n, int i) {
	int mask = (1 << i);
	return n & (~mask);
}
int BitsChangeDiffernce(int a, int b) {
	int difference = a ^ b;
	int count = 0;
	while (difference) {
		count++;
		difference = difference & (difference - 1);
	}
	return count;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int ith;
	cin >> ith;
	cout << GetIthBits(n, ith) << endl;
	cout << setBits(n, ith) << endl;
	cout << clearbits(n, ith) << endl;
	int a, b;
	cin >> a >> b;
	cout << BitsChangeDiffernce(a, b) << endl;

}
