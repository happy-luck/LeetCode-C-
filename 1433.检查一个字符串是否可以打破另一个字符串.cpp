#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        bool t_more = true;
        bool t_less = true;
        for(int i=0;i<s1.length();i++){
            if(s1[i]>s2[i]){
                t_less = false;
            }
            if(s1[i]<s2[i]){
                t_more = false;
            }
        }
        return t_more || t_less;
    }
};