#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < n - 1; i++) {
		if (s[i] != s[i+1]) { // increment counter if current character != next character
			cnt++;
		}
	}
  // add 1 for the last character
	cout << cnt + 1 << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for (int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}

