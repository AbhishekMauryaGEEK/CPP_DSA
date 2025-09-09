#include <iostream>
#include <vector>  
using namespace std;

int main() {
    vector<int>v(5);
    v.push_back(20);
    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.pop_back();
    cout << v.size() << endl;
    v.push_back(10);
    for(auto j:v){
        cout<<j<<"\t";
    }
    return 0;
}
