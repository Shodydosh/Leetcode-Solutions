/**
 * @param {number} n
 * @return {number}
 */
var smallestEvenMultiple = function(n) {
    if(n%2) return n << 1;
    else return n;
};
