#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    //static const int MAXV=10000;
    //int G[MAXV][MAXV]={0};
    vector<int> gardenNoAdj(int N, vector<vector<int> >& paths) {
        vector<int> G[N];
        for (int i=0; i<paths.size(); i++){//建立邻接表
            G[paths[i][0]-1].push_back(paths[i][1]-1);
            G[paths[i][1]-1].push_back(paths[i][0]-1);
        }
        vector<int> answer(N,0);//初始化全部未染色
        for(int i=0; i<N; i++){
            set<int> color {1,2,3,4};
            for (int j=0; j<G[i].size(); j++){
                color.erase(answer[G[i][j]]);//把已染过色的去除
            }
            answer[i]=*(color.begin());//染色
        }
        return answer;
    }
};

int main(){
    vector<vector<int> > paths(3, vector<int> (2));
    paths[0][0] = 1;
    paths[0][1] = 2;
    paths[1][0] = 2;
    paths[1][1] = 3;
    paths[2][0] = 3;
    paths[2][1] = 1;
    // for(int i=0;i<paths.size();i++){
    //     cout<<paths[i][0]<<endl;
    // }
    Solution S;
    vector<int> answer = S.gardenNoAdj(3,paths);
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<endl;
    }
}
