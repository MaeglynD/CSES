#include <iostream>
using namespace std;
#define ll long long int

int main () {
	ll n;

	cin >> n;

	while(n != 1) {
		cout << n << endl;

		if (n % 2) {
			n = (n * 3) + 1;
		} else {
			n = n / 2;
		}
	}

	cout << n;

	return 0;
}

