#include <iostream>
using namespace std;
class Solution {
public:
    int hammingDistance(int x, int y) {
        int xo = x ^ y;
        int distance = 0;
        while(xo){
            distance += 1;
            xo = xo & (xo-1);
        }
        return distance;
    }
};