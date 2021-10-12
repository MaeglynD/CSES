#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int

int main () {
	ll n;
	cin >> n;

	cout << (ll)pow(2, n) % 7;

	return 0;
}

