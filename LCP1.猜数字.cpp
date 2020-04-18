#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
        int res = 0;
        for(int i=0;i<guess.size();i++){
            if(guess[i]==answer[i]){
                res++;
            }
        }
        return res;
    }
};
int main(){
    Solution S;
    vector<int> guess;
    vector<int> answer;
    guess.push_back(1);
    guess.push_back(2);
    answer.push_back(1);
    answer.push_back(1);
    int res = S.game(guess,answer);
    cout<<res<<endl;
}