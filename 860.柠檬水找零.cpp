#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for(auto bill:bills){
            if (bill==5){
                five += 1;
            }
            else if (bill==10){
                if(!five){
                    return false;
                }
                five--;
                ten++;
            }
            else{
                if(ten && five){
                    ten--;
                    five--;
                }
                else if (five>=3){
                    five -= 3;
                }
                else{
                    return false;
                }
            }   
        }
        return true;
    }
};

int main(){
    vector<int> bills(6);
    bills[0] = 5;
    bills[1] = 5;
    bills[2] = 5;
    bills[3] = 10;
    bills[4] = 20;
    bills[5] = 10;
    Solution S;
    bool res = S.lemonadeChange(bills);
    cout<<res<<endl;
}