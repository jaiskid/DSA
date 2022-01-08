#include<bits/stdc++.h>
using namespace std;
vector<string> fizzbuzz(int n) {
	vector<string> answer;
	for (int i = 1; i <=n; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			answer.push_back("FizzBuzz");
		}
		else if (i % 5 == 0) {
			answer.push_back("Bizz");
		}
		else if (i % 3 == 0) {
			answer.push_back("Fizz");
		}
		else {
			answer.push_back(to_string(i));
		}
	}
	return answer;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<string> answer = fizzbuzz(n);
	for (auto i : answer) {
		cout << i << " ";
	}
}
