#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max_ = arr[arr.size()-1];
        arr[arr.size()-1] = -1;
        for(int i=arr.size()-2;i>-1;i--){
            int temp = max_;
            max_ = max(max_,arr[i]);
            arr[i] = temp;
        }
        return arr;
    }
};