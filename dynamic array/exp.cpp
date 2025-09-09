// Input sorted array (-3,-2,-1,0,2,4) and sort on the basis of equation Ax2+Bx+C, A=-1,B=-4,c=1	
#include <iostream>
#include <vector>  
#include<algorithm>
using namespace std;
int main() {
    vector<int>v;
    vector<int>v1;
    int arr[]={-3,-2,-1,0,2,4};
    for(int i=0;i<6;i++){
        v.push_back(-1*(arr[i]*arr[i])+((-4)*arr[i])+1);
    }
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            v1.push_back(arr[i]);
        }
    }
    for(int k:v1){
        cout<<k<<" ";
    }
    return 0;
}
