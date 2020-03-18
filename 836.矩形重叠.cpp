#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
// 方法一
    // bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
    //     return !(rec1[2] <= rec2[0] ||
    //             rec2[2] <= rec1[0] ||
    //             rec1[3] <= rec2[1] ||
    //             rec2[3] <= rec1[1]);
    // }
// 方法二
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        return (min(rec1[2], rec2[2]) > max(rec1[0], rec2[0]) &&
                min(rec1[3], rec2[3]) > max(rec1[1], rec2[1]));
    }
};
            
int main() {
    vector<int> rec1;
    vector<int> rec2;
    rec1.push_back(0);
    rec1.push_back(0);
    rec1.push_back(2);
    rec1.push_back(2);
    rec2.push_back(1);
    rec2.push_back(1);
    rec2.push_back(3);
    rec2.push_back(3);
    Solution S;
    bool ans = S.isRectangleOverlap(rec1,rec2);
    cout << ans << endl;
};