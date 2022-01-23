//Time Complexity O(2^n)
#include<bits/stdc++.h>
using namespace std;
void powerset(string s, int i, string cur, vector<string>&res) {
	if (i == s.length()) {
		res.push_back(cur);
		return;
	}
	powerset(s, i + 1, cur + s[i], res);
	powerset(s, i + 1, cur, res);

}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	vector<string> res;
	powerset(s, 0, "", res);
	for (auto i : res) {
		cout << i << endl;
	}
}
