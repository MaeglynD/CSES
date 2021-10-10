#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int


int main () {
	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		long k = i;
		long ksq = k * k;

		long total = ((ksq - 1) * (1 + (ksq - 1)) / 2);
		long attackingSquares = ((k - 2) * 10) + (((k - 4) * 4) * (k - 2)) + ((k * 2) - 4);

		cout << total - attackingSquares << endl;
	}

	return 0;
}

