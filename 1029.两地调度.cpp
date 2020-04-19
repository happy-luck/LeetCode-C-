#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int twoCitySchedCost(vector<vector<int> >& costs) {
        sort(begin(costs), end(costs),
                [](const vector<int> &o1, const vector<int> &o2) {
            return (o1[0] - o1[1] < o2[0] - o2[1]);
        });
        int total = 0;
        int n = costs.size()/2;
        for(int i=0;i<n;i++){
            total += costs[i][0]+costs[i+n][1];
        }
        return total;
    }
};
int main(){
    vector<vector<int> > costs(4, vector<int> (2));
    // costs.resize(4);
    // costs[0].resize(2);
    costs[0][0] = 10;
    costs[0][1] = 20;
    costs[1][0] = 30;
    costs[1][1] = 200;
    costs[2][0] = 400;
    costs[2][1] = 50;
    costs[3][0] = 30;
    costs[3][1] = 20;
    for(int i=0;i<costs.size();i++){
        cout<<costs[i][0]<<endl;
    }
    Solution S;
    int res = S.twoCitySchedCost(costs);
    cout<<res<<endl;
}

    
