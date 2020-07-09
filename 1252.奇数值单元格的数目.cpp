#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int oddCells(int n, int m, vector<vector<int> >& indices) {
        int res = 0;
        vector<bool> rows(n,false) , cols(m,false);
        int rows_true = 0, cols_true = 0;
        for(auto indice : indices){
            rows[indice[0]] = !rows[indice[0]];
            cols[indice[1]] = !cols[indice[1]];
            if(rows[indice[0]])
                rows_true ++;
            else
                rows_true --;

            if(cols[indice[1]])
                cols_true ++;
            else
                cols_true --;
        }
        int rows_false = n - rows_true;
        int cols_false = m - cols_true;
        res = rows_true * cols_false + rows_false * cols_true;
        return res;
    }
}; 

