int* luckyNumbers (int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    int i, j;
    int *ret = (int*)malloc(sizeof(int) * matrixSize);
    int minRow[matrixSize], maxCol[*matrixColSize];
    for (i = 0; i < matrixSize; i++) {
        minRow[i] = INT_MAX;
        for (j = 0; j < *matrixColSize; j++) {
            if (matrix[i][j] <= minRow[i]) {
                minRow[i] = matrix[i][j];
            }
        }
    }
    for (i = 0; i < *matrixColSize; i++) {
        maxCol[i] = INT_MIN;
        for (j = 0; j < matrixSize; j++) {
            if (matrix[j][i] >= maxCol[i]) {
                maxCol[i] = matrix[j][i];
            }
        }
    }
    *returnSize = 0;
    for (i = 0; i < matrixSize; i++) {
        for (j = 0; j < *matrixColSize; j++) {
            if (matrix[i][j] == minRow[i] && matrix[i][j] == maxCol[j]) {
                ret[*returnSize] = matrix[i][j];
                (*returnSize)++;
            }
        }
    }
    return ret;
}