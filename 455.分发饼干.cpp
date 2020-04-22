#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(),s.end());
        int child = 0;
        int cookie = 0;
        while (child<g.size() && cookie<s.size()){
            if (g[child] <=s[cookie]){
                child ++;
            }
            cookie ++;
        }
        return child;
    }
};
int main(){
    vector<int> g(3);
    vector<int> s(2);
    g[0] = 1;
    g[1] = 2;
    g[2] = 3;
    s[0] = 2;
    s[1] = 1;
    Solution S;
    int res = S.findContentChildren(g,s);
    cout<<res<<endl;
}