
/**
 * @param {number[]} input
 * @return {number[]}
 */
var findErrorNums = function (input) {
    const NOT_FOUND = -1;
    let duplicate = NOT_FOUND;
    let missing = NOT_FOUND;

    for (let i = 0; i < input.length; ++i) {
        if (input[Math.abs(input[i]) - 1] < 0) {
            duplicate = Math.abs(input[i]);
            continue;
        }
        input[Math.abs(input[i]) - 1] = -input[Math.abs(input[i]) - 1];
    }

    for (let i = 0; i < input.length && missing === NOT_FOUND; ++i) {
        if (input[i] > 0) {
            missing = i + 1;
        }
    }
    return [duplicate, missing];
};
