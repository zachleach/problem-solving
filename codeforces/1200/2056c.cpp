#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int a = n / 2;

		/* needs to be space delimited integers */
		string b = "";
		for (int i = 1; i < a + 1; i++) {
			b += to_string(i);
		}
		
		string result = b + b;
		cout << (n % 2 ? "1" + result : result) << endl;
	}
}




































































