#include<iostream>
using namespace std;
long long DAT[101]={0};
long long febo(int i){
    if(i==1||i==2){
        return 1;
    }
    else{
        if(DAT[i]==0){
             DAT[i]=febo(i-1)+febo(i-2);
        }
        return DAT[i];
    }
}
int main(){
    int k;
    cin>>k;
    for(int i=1;i<=k;i++){
        long long ans= febo(i);
        cout<<ans<<" ";
    }
}