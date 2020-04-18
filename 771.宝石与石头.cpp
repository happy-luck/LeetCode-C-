#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,bool> mp;
        int sum = 0;
        for(auto j:J){
            mp[j] = 1;
        }
        for(auto s:S){
            if(mp[s]) sum++;
        }
        return sum;
    }
};

int main(){
    Solution S;
    string J = "aA";
    string S1 = "abc";
    int res = S.numJewelsInStones(J,S1);
    cout<<res<<endl;
}