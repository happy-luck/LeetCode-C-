
#include <iostream> 
#include <vector>

using namespace std;

class Solution {
    int dfs(vector<vector<int> >& grid, int cur_i, int cur_j) {
        if (cur_i < 0 || cur_j < 0 || cur_i == grid.size() || cur_j == grid[0].size() || grid[cur_i][cur_j] != 1)
            return 0;
        grid[cur_i][cur_j] = 0;
        int di[4] = {0, 0, 1, -1};
        int dj[4] = {1, -1, 0, 0};
        int ans = 1;
        for (int index = 0; index != 4; ++index) {
            int next_i = cur_i + di[index], next_j = cur_j + dj[index];
            ans += dfs(grid, next_i, next_j);
        }
        return ans;
    }
public:
    int maxAreaOfIsland(vector<vector<int> >& grid) {
        int ans = 0;
        for (int i = 0; i != grid.size(); ++i)
            for (int j = 0; j != grid[0].size(); ++j)
                ans = max(ans, dfs(grid, i, j));
        return ans;
    }
};

int main()
{
    
        //正确的插入方式
    vector<vector<int> > A;
    //A.push_back里必须是vector
    vector<int> B;
    B.push_back(1);
    B.push_back(1);
    B.push_back(0);
    B.push_back(0);
    B.push_back(0);
    A.push_back(B);
    B.clear();
    B.push_back(1);
    B.push_back(1);
    B.push_back(0);
    B.push_back(0);
    B.push_back(0);
    A.push_back(B);
    B.clear();
    B.push_back(0);
    B.push_back(0);
    B.push_back(0);
    B.push_back(1);
    B.push_back(1);
    A.push_back(B);
    B.clear();
    B.push_back(0);
    B.push_back(0);
    B.push_back(0);
    B.push_back(1);
    B.push_back(1);
    A.push_back(B);
    Solution S;
    int ans = S.maxAreaOfIsland(A);
    printf("%d\n", ans);
};