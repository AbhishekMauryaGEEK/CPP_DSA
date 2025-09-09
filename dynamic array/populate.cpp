// You have been given an integer value N. Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,7.......8,6,4,2.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i <=n; i++) {
        v.push_back(i);
    }

 for (int i = 1; i <= n; i++) {
    cout << v[i] << " ";
}
for(int i=1;i<=n;i++){
    if(v[i]%2==0){
        v1.push_back(v[i]);
    }
    else{
        v2.push_back(v[i]);
    }
}
sort(v1.begin(),v1.end());
 for(int val:v1) {
    cout <<val << " ";
}
sort(v2.begin(),v2.end(),greater<int>());
 for(int val:v2) {
    cout << val << " ";
}
    return 0;
}