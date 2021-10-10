#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int

int main () {
	int n;

	cin >> n;

	for(int k = 1; k <= n; k++) {
		ll total = 0;
		int completedRows = 0;
		ll gridSize = k * k;
		
		auto removeAttackingSquares = [&](int end, int num, int i) {
			if (end <= gridSize) {
				int start = end - k;
				int pos1 = (i + k + num);
				int pos2 = (i + k - num);

				if ((pos1 > start && pos1 <= end)) total--; 
				if ((pos2 > start && pos2 <= end)) total--; 
			}
		};

		for (ll i = 1; i <= gridSize; i++) {
			int pos = i - completedRows;
			int trail = k - pos;
			int aEnd = i + trail + k;
			int bEnd = aEnd + k;

			total += gridSize - i;

			removeAttackingSquares(aEnd, 2, i);
			removeAttackingSquares(bEnd, 1, i + k);

			if (i % k == 0) completedRows +=k; 
		}

		cout << total << endl;
	}

	return 0;
}

