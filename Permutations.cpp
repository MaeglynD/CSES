#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int

int main () {
	int n, mid;
	cin >> n;

	if(n < 4 && n > 1) {
		cout << "NO SOLUTION";
		return 0;
	}
	
	mid = n / 2;

	for (int i = 0; i < n; ++i){
		if (i < mid) {
			cout << (i + 1) * 2;
		} else {
			int ix = i - mid;
			cout << (ix * 2) + 1;
		}
		cout << " ";
	}

	return 0;
}

