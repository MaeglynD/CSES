#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int

void answer (int k) {
	int total = 0;
	int completedRows = 0;
	int gridSize = k * k;
	
	auto removeAttackingSquares = [&](int end, int num, int i) {
		if (end <= gridSize) {
			int start = end - k;
			int pos1 = (i + k + num);
			int pos2 = (i + k - num);

			if ((pos1 >= start && pos1 <= end)) total--; 
			if ((pos1 >= start && pos1 <= end)) total--; 
		}
	};

	for (int i = 1; i <= gridSize; i++) {
		int pos = i - completedRows;
		int trail = k - pos;
		int aEnd = i + trail + k;
		int bEnd = aEnd + k;

		total += gridSize - i;

		removeAttackingSquares(aEnd, 2, i);
		removeAttackingSquares(bEnd, 1, i);

		if (i % k == 0) completedRows +=k;
	}

	cout << total << endl;
}


int main () {
	int n;

	cin >> n;

	for(int i = 1; i <= n; i++) {
		answer(i);
	}

	return 0;
}

