#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);	
	int n, v;
	cin >> n >> v;
	int current_liter = 0;
	int required_liter = n - 1;
	int cost = 0;
	for (int i = 0; i < n; i++) {
		// find the minimum gas fuel needed (choose between the remaining liter capacity of the
		// vehicle and the required liter)
		int fill = min(v - current_liter, required_liter);
		// add 'fill' to 'current_liter' (current gas fuel of the vehicle)
		current_liter += fill;
		// decrement 'current_liter' (travel to next city)
		current_liter--;
		// calculate 'cost' by adding the stored value to the 'fill' multiplied to the payment per city (current index + 1)
		cost += (fill * (i + 1));
		// subtract 'required_liter' by the 'fill'
		required_liter -= fill;
	}
	cout << cost << '\n';
	return 0;
}
