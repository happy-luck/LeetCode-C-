#include <iostream>
#include <deque>
using namespace std;

class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        deque<int> num;
        while(N)
        {
            num.push_front(N%10);
            N/=10;
        }
        int i = 1;
        int size=num.size();
        while(i<size && num[i-1]<=num[i]){
            i++;
        }
        while(0<i && i<size && num[i-1]>num[i]){
            num[i-1]--;
            i--; 
        }
        for(int j=i+1;j<size;++j){
            num[j]=9;
        }
        int result=0;
        for(int n:num){
            result=result*10+n;
        }
        return result;
    }
};       
        