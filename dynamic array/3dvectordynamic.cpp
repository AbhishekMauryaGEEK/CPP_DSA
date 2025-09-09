#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1(3,1);
    vector<int>v2(3,2);
    vector<int>v3(3,3);
    vector<int>v4(3,9);
    vector<int>v5(3,8);
    vector<int>v6(3,7);
    vector<int>v7(3,6);
    vector<int>v8(3,5);
    vector<vector<int>>vv;
    vv.push_back(v1);
    vv.push_back(v2);
    vv.push_back(v3);
    vv.push_back(v4);       
    vv.push_back(v5);
    vv.push_back(v6);
    vv.push_back(v7);
    vv.push_back(v8);
    for (int i=0;i<vv.size();++i){
        for(int j=0;j<vv[i].size();++j){
            cout<<vv[i][j]<<"\t";
        }
        cout<<"\n";
    }
return 0;

}