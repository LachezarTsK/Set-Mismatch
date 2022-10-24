
/**
 * @param {number[]} input
 * @return {number[]}
 */
var findErrorNums = function (input) {
    const unique = new Set();
    let expectedSum = input.length * (1 + input.length) / 2;
    let actualSum = 0;
    let duplicate = 0;
    for (let n of input) {
        if (unique.has(n)) {
            duplicate = n;
        }
        unique.add(n);
        actualSum += n;
    }
    return [duplicate, duplicate + expectedSum - actualSum];
};
