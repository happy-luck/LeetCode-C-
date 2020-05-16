#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int dif1 = 0;
        int dif2 = 0;
        int res = 0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]=='x'){
                if(s1[i] != s2[i]){
                    dif1++;
                }
            } else{
                if(s1[i] != s2[i]){
                    dif2++;
                }
            }
        }
        if((dif1+dif2)%2!=0){
            return -1;
        }
        else{
            return dif1%2 + dif2%2 + int(dif1/2) + int(dif2/2);
        }
    }
};