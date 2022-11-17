/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    return s.split(" ").map((word) => word.split("").reverse().join("")).join(" ");
    return s
        .split(" ")  // To take individual words depending on the space, split the string.
        .map((word) => 
        word.split("")// To create the string, divide each word into characters, 
        .reverse() //  reverse those characters,
        .join("")) //  and then put them back together.
    .join(" "); // build the words, then combine them once more into a string with spaces between them.
};
