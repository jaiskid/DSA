#include<bits/stdc++.h>
using namespace std;
int reverse(int n) {
	int number = 0;
	while (n) {
		number = number * 10 + (n % 10);
		n /= 10;
	}
	cout << number << "	";
	return number;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	if (reverse(n) == n) {
		cout << "Palindrome Number" << endl;
	}
	else {
		cout << "Not an Palindrome Number" << endl;
	}
}
