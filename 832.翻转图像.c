/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** flipAndInvertImage(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes){
    int row, col;
    int left, right;
    *returnSize = ASize;
    returnColumnSizes[0] = AColSize;
    for(row = 0; row < ASize; row++){
        left = 0;
        right = AColSize[row] - 1;
        while(left <= right){
            if(A[row][left] == A[row][right]){
                A[row][left] = A[row][right] = 1 - A[row][right];
            }
            left++;
            right--;
        }
    }
    return A;
}