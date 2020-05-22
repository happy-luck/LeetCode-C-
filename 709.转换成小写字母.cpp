#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string toLowerCase(string str) {
        int len = str.size();
        for(int i = 0; i < len; ++ i){
            if(str[i] <= 'Z' && str[i] >= 'A'){
                str[i] = str[i] + 32;
            }
        }
        return str;
    }
};