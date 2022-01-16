#include<bits/stdc++.h>
using namespace std;
void Sieve(vector<int> &prime) {
	prime[0] = 0;
	prime[1] = 0;
	for (int i = 2; i * i <= 1000; i++) {
		for (int j = 2 * i; j <= 1000; j += i) {
				prime[j] = 0;
		}
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int> prime(1000, 1);
	Sieve(prime);
	for (auto i : prime) {
		cout << i << "	";
	}
}
