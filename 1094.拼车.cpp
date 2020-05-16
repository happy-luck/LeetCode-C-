#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp1(pair<int,int>a,pair<int,int>b)
{
    if(a.first != b.first){
        return a.first < b.first;
    } else{
        return a.second < b.second;
    }
    
}
class Solution {
public:
    bool carPooling(vector<vector<int> >& trips, int capacity) {
        vector<pair<int,int> > travel;
        for(int i=0;i<trips.size();i++){
            travel.push_back({trips[i][1], trips[i][0]});
            travel.push_back({trips[i][2], -trips[i][0]});
        }
        sort(travel.begin(), travel.end(), cmp1);
        int people_in_car = 0;
        for (auto it = travel.begin();it != travel.end();it++){
            people_in_car += it->second;
            if (people_in_car > capacity){
                 return false;
            }
        }  
        return true;      
    }
};