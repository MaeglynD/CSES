#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int

int main () {
	int n, total = 2;
	unsigned int base = 1000000007;

	cin >> n;

	while (n > 1) {
		total = (total * 2) % base;
		n--;
	}

	cout << total;
	
	return 0;
}

