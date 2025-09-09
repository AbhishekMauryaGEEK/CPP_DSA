#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    int mini=100000,maxi=-100000;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>maxi)
         maxi=v[i];
        if(v[i]<mini)
         mini=v[i];
    }
    vector<int>DAT(maxi+1);
    return 0;
}