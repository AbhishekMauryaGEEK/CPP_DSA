#include <iostream>
#include<Vector>
using namespace std;

/***********************/
 void trav(vector<int>&c){
    for(auto k:c){
        cout<<k<<" ";
    }
 }
/***********************/
/***********************/
 void merge(vector<int>&a,vector<int>&b,int m, int n){
    vector<int>c;
    int i=0,j=0;
    while(i<m and j<n){
       if(a[i]<b[j]){
           c.push_back(a[i]);
           i++;
       } 
       else{
           c.push_back(b[j]);
           j++;
       } 
    }
    while(i<m){
        c.push_back(a[i]);
        i++;
    }
       while(j<n){
        c.push_back(b[j]);
        j++;
    } 
    trav(c);
} 
/***********************/ 
int main(){
    int m,n; 
    cout<<"Enter the size of the array A:";
    cin>>m;
    vector<int>a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"Enter the size of the array B:";
    cin>>n;
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    merge(a,b,m,n);
}
