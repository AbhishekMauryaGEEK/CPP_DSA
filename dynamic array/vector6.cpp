#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of element";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the element";
    for(int i=0;i<n;i++)
       cin>>v[i];
    cout<<"array:";
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";

}