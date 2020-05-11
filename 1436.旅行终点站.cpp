#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
    string destCity(vector<vector<string> >& paths) {
        set<string> allCity;
        for(int i=0;i<paths.size();i++){
            allCity.insert(paths[i][0]);
            allCity.insert(paths[i][1]);
        }
        for(int i=0;i<paths.size();i++){
            allCity.erase(paths[i][0]);
        }
        return *allCity.begin();
    }
};
