/**
 * @param {number[][]} matrix
 * @return {number}
 */
var countSquares = function(matrix) {
    var ans = 0;
    
    for(let i=1; i<matrix.length; i++){
        for(let j=1; j<matrix[0].length; j++){
            if(matrix[i][j] == 1){
                matrix[i][j] += Math.min(matrix[i-1][j-1], matrix[i-1][j], matrix[i][j-1])
            }
        }
    }
    
    for(let i=0; i<matrix.length; i++){
        for(let j=0; j<matrix[0].length; j++){
            ans += matrix[i][j];
        }
    }
    
    return ans;
};