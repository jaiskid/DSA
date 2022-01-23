//Time Complexity O(n)
#include<bits/stdc++.h>
using namespace std;
bool palindrome(string a, int s, int e) {
	if (s >= e) {
		return true;
	}
	if (a[s] != a[e]) {
		return false;
	}
	return palindrome(a, s + 1, e - 1);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string a;
	cin >> a;
	cout << palindrome(a, 0, a.length()-1);
}
