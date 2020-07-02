#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int countNegatives(vector<vector<int> >& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int res = 0;
        bool target = false;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]<0){
                    if(j!=0){
                        res += n - j;
                    }
                    else{
                        target = true;
                    }
                    break;
                }
            }
            if(target==true){
                res += (m-i)*n;
                break;
            }
        }
        return res;
    }
};