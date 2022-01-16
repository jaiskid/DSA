#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n){
	int count = 0;
	while(n){
		count++;
		n = n & n - 1;
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
	cout << countSetBits(n) << endl;
}
