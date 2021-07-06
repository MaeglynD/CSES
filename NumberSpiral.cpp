#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int

void answer(long x, long y) {
	long maxint = max(x, y);
	long move = maxint - min(x, y);

	// https://en.wikipedia.org/wiki/Arithmetic_progression#Sum
	long acc = (2 * maxint) - 2;
	long total = (((acc / 2) * (2 + acc)) / 2) + 1;

	if (maxint % 2 == 0) {
		total = total + ((x > y) ? move : -move);
	} else {
		total = total + ((x > y) ? -move : move);
	}

	cout << total << endl;
}

int main () {
	long s, x, y;
	cin >> s;

	while (cin >> x >> y) {
		answer(x, y);
	}

	return 0;
}

