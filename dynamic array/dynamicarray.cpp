#include <iostream>
#include <vector>  
using namespace std;

int main() {
    vector<int>v;
    v.push_back(20);
    v.push_back(10);
    v.push_back(30);
    v.push_back(50); 
    v.push_back(20);
    v.push_back(60);
    v.push_back(80);
    v.push_back(90);
    v.pop_back();
    v.push_back(10);
    cout << v.size() << endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\t";
    }
    v.pop_back();
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\t";
    }
    return 0;
}
