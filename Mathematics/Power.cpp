#include<bits/stdc++.h>
using namespace std;
int power(int a, int b) {
	if (b == 0) {
		return 1;
	}
	return a * power(a, b - 1);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << power(5, 2);
}
