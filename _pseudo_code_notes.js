// function test(x, y) {
// 	const maxint = Math.max(x, y);
// 	let move = maxint - Math.min(x, y);

// 	// https://en.wikipedia.org/wiki/Arithmetic_progression#Sum
// 	let acc = (2 * maxint) - 2;
// 	let total = (((acc / 2) * (2 + acc)) / 2) + 1;

// 		if (maxint % 2 == 0) {
// 			(x > y) ? total += move : total -= move;
// 		} else {
// 			(x > y) ? total -= move : total += move
// 		}

// 	return total;
// }

// console.log(test(2, 3));
// console.log(test(4, 3));
// console.log(test(6, 3));
// console.log(test(1, 5));

// // total = 0;
// // for i in matrix:
// // 	// It starts looking from i onwards. Only search forward.
// // 	testi = i
// // for testi in matrix:
// // 	does i && testi work ? total++

// for (let i = 1; i < 10; i++) {
// 	const k = i;
// 	const ksq = k * k;

// 	const total = ((ksq - 1) * (1 + (ksq - 1)) / 2);
// 	const attackingSquares = ((k - 2) * 10) + (((k - 4) * 4) * (k - 2)) + ((k * 2) - 4);

// 	// console.log(total);
// 	// console.log(attackingSquares);
// 	console.log(total - attackingSquares);
// }

// const arithmeticSeries = (na, nb) => (((nb - na) + 1) * (na + nb)) / 2

function test(n) {
	const total = (n * (1 + n)) / 2;
	const changes = [];

	console.log(total);

	if (total % 2 == 1) {
		console.log('NO');
		return;
	} else {
		console.log('YES');
	}

	let interim = n; // 11
	let half = total / 2;  // 33

	while (half > 0) {
		changes.push(interim >= half ? half : interim);
		half -= interim;
		interim--;
	}

	console.log(
		Array
			.from({ length: n }, (_, i) => i + 1)
			.filter(x => !changes.includes(x))
	);

	console.log(changes);
}

test(1);