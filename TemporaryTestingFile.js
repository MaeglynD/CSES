function test(x, y) {
	const maxint = Math.max(x, y);
	let move = maxint - Math.min(x, y);

	// https://en.wikipedia.org/wiki/Arithmetic_progression#Sum
	let acc = (2 * maxint) - 2;
	let total = (((acc / 2) * (2 + acc)) / 2) + 1;

		if (maxint % 2 == 0) {
			(x > y) ? total += move : total -= move;
		} else {
			(x > y) ? total -= move : total += move
		}

	return total;
}

console.log(test(2, 3));
console.log(test(4, 3));
console.log(test(6, 3));
console.log(test(1, 5));