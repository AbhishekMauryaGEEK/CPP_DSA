#include <iostream>
#include <vector>  
using namespace std;

int main() {
    vector<int>v;
    cout<<v.capacity()<<endl;
    v.push_back(20);
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    v.push_back(30);
    cout<<v.capacity()<<endl;
    v.push_back(50); 
    cout<<v.capacity()<<endl;
    v.push_back(20);
    cout<<v.capacity()<<endl;
    v.push_back(60);
    cout<<v.capacity()<<endl;
    v.push_back(80);
    cout<<v.capacity()<<endl;
    v.push_back(90);
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout << v.size() << endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\t";
    }
    v.pop_back();
    v.pop_back();
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<"\t";
    // }
    cout<<"\n";
    for(auto j:v)
        cout<<j<<"\t";
    return 0;
}
