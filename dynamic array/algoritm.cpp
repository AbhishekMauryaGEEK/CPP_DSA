#include <iostream>
#include <vector>  
#include <algorithm>
using namespace std;
int main() {
    vector<int>v;
    v.push_back(20);
    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.push_back(90);
    v.push_back(50);
    sort(v.begin(),v.end(),greater<int>());
    for(auto i:v)
       cout<<i<<"\n";
    return 0;
}
