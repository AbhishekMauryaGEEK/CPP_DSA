#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    int k,l;
    cin>>k>>l;
    for(int i=k;i<=l;i++){
        v.push_back(i);
    }
    int n = sizeof(v) / sizeof(v[0]);
    vector<int> DAT(n, 0);
    for(int i = 0; i < n; i++) {
        DAT[v[i]]++;
    }
    for(int i = k; i <= l; i++) {
        if(DAT[i]>=1) {
            cout << i << " ";
        }
    }
    return 0;
}