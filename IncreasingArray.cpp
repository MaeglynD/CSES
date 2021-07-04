#include <iostream>
#include<vector>
using namespace std;
#define ll long long int

int main () {
	int size, prev = 0;
	ll moves = 0;
	cin >> size;

	for(int i = 0; i < size; ++i) {
		int current;
		cin >> current;
		prev = max(current, prev);
		moves += (prev - current);
	}

	cout << moves;
	return 0;
}

