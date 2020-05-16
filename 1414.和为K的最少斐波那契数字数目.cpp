#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        int a,b = 0;
        vector<int> line;
        while(a+b<=k){
            line.push_back(a+b);
            int c = a+b;
            a = b;
            b = c;
        }
        int ans = 0;
        for (int i=line.size()-1;i>= 0;--i) {
            if (k >= line[i]) {
                ++ans;
                k -= line[i];
            }
        }
        return ans;
    }
};