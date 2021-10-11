#include <iostream>
#include <cmath>
#include <set>
using namespace std;
#define ll long long int

int main () {
	ll n, total;
	cin >> n;

	total = (n * (1 + n)) / 2;

	if (total % 2 != 0) {
		cout << "NO";
	} else {
		cout << "YES" << endl;

		ll i = n;
		ll half = total / 2;
		set<int> changes;

		while (half > 0) {
			changes.insert(i >= half ? half : i);
			half-=i;
			i--;
		}

		cout << changes.size() << endl;
		
		for (int i : changes) {
			cout << i << " ";
		}

		cout << endl << n - changes.size() << endl;

		for (int i = 1; i < n; i++) {
			if (!changes.count(i)) {
				cout << i << " ";
			}
		}
	}

	return 0;
}

