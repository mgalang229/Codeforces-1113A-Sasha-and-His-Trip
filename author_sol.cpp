#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);	
	int n, v;
	cin >> n >> v;
	// check gas fuel can accommodate all the way to the 'n'-th city
	if (n - 1 < v) {
		cout << n - 1 << '\n';
		return 0;
	}
	// otherwise, buy 'v' minus one gas fuels to the 'v'-th city (since we will start at city 1)
	int res = v - 1;
	// start the loop after the 'v' minus one-th city
	for (int i = res + 1; i < n; i++) {
		// to drive between cities with numbers i and i + 1, buy liter in the city with number i  − v + 1
		res += (i - v + 1);
	}
	cout << res << '\n';
	return 0;
}
