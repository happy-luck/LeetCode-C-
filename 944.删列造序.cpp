#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int ans = 0;
        int n = A.size();
        int m = A[0].size();
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                if(A[j][i]<A[j-1][i]){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};

int main(){
    vector<string> A;
    A.push_back("abcdef");
    A.push_back("uvwxyz");
    Solution S;
    int res = S.minDeletionSize(A);
    cout<<res<<endl;
}