
#include <iostream> 
#include <vector>
#include <stack> 
#include <queue>
using namespace std;

class Solution {
//  方法一
//     int dfs(vector<vector<int> >& grid, int cur_i, int cur_j) {
//         if (cur_i < 0 || cur_j < 0 || cur_i == grid.size() || cur_j == grid[0].size() || grid[cur_i][cur_j] != 1)
//             return 0;
//         grid[cur_i][cur_j] = 0;
//         int di[4] = {0, 0, 1, -1};
//         int dj[4] = {1, -1, 0, 0};
//         int ans = 1;
//         for (int index = 0; index != 4; ++index) {
//             int next_i = cur_i + di[index], next_j = cur_j + dj[index];
//             ans += dfs(grid, next_i, next_j);
//         }
//         return ans;
//     }
// public:
//     int maxAreaOfIsland(vector<vector<int> >& grid) {
//         int ans = 0;
//         for (int i = 0; i != grid.size(); ++i)
//             for (int j = 0; j != grid[0].size(); ++j)
//                 ans = max(ans, dfs(grid, i, j));
//         return ans;
//     }
// 方法二
    // public:
    // int maxAreaOfIsland(vector<vector<int> >& grid) {
    //     int ans = 0;
    //     for (int i = 0; i != grid.size(); ++i)
    //         for (int j = 0; j != grid[0].size(); ++j) {
    //             int cur = 0;
    //             stack<int> stacki;
    //             stack<int> stackj;
    //             stacki.push(i);
    //             stackj.push(j);
    //             while (!stacki.empty()) {
    //                 int cur_i = stacki.top(), cur_j = stackj.top();
    //                 stacki.pop();
    //                 stackj.pop();
    //                 if (cur_i < 0 || cur_j < 0 || cur_i == grid.size() || cur_j == grid[0].size() || grid[cur_i][cur_j] != 1)
    //                     continue;
    //                 ++cur;
    //                 grid[cur_i][cur_j] = 0;
    //                 int di[4] = {0, 0, 1, -1};
    //                 int dj[4] = {1, -1, 0, 0};
    //                 for (int index = 0; index != 4; ++index) {
    //                     int next_i = cur_i + di[index], next_j = cur_j + dj[index];
    //                     stacki.push(next_i);
    //                     stackj.push(next_j);
    //                 }
    //             }
    //             ans = max(ans, cur);
    //         }
    //     return ans;
    // }

// 方法三
public:
    int maxAreaOfIsland(vector<vector<int> >& grid) {
        int ans = 0;
        for (int i = 0; i != grid.size(); ++i)
            for (int j = 0; j != grid[0].size(); ++j) {
                int cur = 0;
                queue<int> queuei;
                queue<int> queuej;
                queuei.push(i);
                queuej.push(j);
                while (!queuei.empty()) {
                    int cur_i = queuei.front(), cur_j = queuej.front();
                    queuei.pop();
                    queuej.pop();
                    if (cur_i < 0 || cur_j < 0 || cur_i == grid.size() || cur_j == grid[0].size() || grid[cur_i][cur_j] != 1)
                        continue;
                    ++cur;
                    grid[cur_i][cur_j] = 0;
                    int di[4] = {0, 0, 1, -1};
                    int dj[4] = {1, -1, 0, 0};
                    for (int index = 0; index != 4; ++index) {
                        int next_i = cur_i + di[index], next_j = cur_j + dj[index];
                        queuei.push(next_i);
                        queuej.push(next_j);
                    }
                }
                ans = max(ans, cur);
            }
        return ans;
    }
};


int main()
{
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