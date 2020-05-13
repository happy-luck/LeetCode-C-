#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length()<k){
            return false;
        }
        unordered_map<char,int> dic;
        for(char c:s){
            ++dic[c];
        }
        int num = 0;
        for(auto& [k,v]: dic){
            if(v%2!=0){
                num++;
            }
        }
        if(num<=k){
            return true;
        } else{
            return false;
        }
    }
};