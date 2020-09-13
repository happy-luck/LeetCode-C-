int diagonalSum(int** mat, int matSize, int* matColSize){
    int i;
    int res = 0;
    for(i = 0; i< matSize; i++){
        res += mat[i][i];
        res += mat[i][matSize -1 - i];
    }
    if(matSize % 2 == 1){
        res -= mat[matSize/2][matSize/2];
    }
    return res;
}