#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int

int main () {
	int n;
	cin >> n;

	int total = 0;
	int acc = 5;

	while ((n / acc) >= 1) {
		total += n / acc;
		acc = acc * 5;
	}

	cout << total;

	return 0;
}

