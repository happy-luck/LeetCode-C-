int countGoodTriplets(int* arr, int arrSize, int a, int b, int c){
    int i, j, k;
    int res = 0;
    for(i = 0; i < arrSize; i++){
        for(j = i + 1; j < arrSize; j++){
            if(arr[i] - arr[j] <= a && arr[i] - arr[j] >= -1 * a){
                for(k = j + 1; k < arrSize; k++){  
                    if(arr[j] - arr[k] <= b && arr[j] - arr[k] >= -1 * b &&
                       arr[i] - arr[k] <= c && arr[i] - arr[k] >= -1 * c){
                        res += 1;
                    }
                }
            } 
        }
    }
    return res;
}