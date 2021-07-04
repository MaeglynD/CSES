#include <iostream>
using namespace std;
#define ll long long int

int main () {
	string n;
	int highest = 1, current = 1;

	cin >> n;

	char prev = 'X';

	for(char c : n) {
		if (prev == c) {
			current++;
			highest = max(current, highest);
		} else {
			current = 1;
		}

		prev = c;
	}

	cout << highest;
	
	return 0;
}

