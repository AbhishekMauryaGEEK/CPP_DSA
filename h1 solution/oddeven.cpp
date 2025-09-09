#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {2, 5, 7, 8, 1, 4, 3, 9, 11};
    vector<int> evens, odds;
    for (int num : v)
    {
        if (num % 2 == 0)
            evens.push_back(num);
        else
            odds.push_back(num);
    }
    sort(evens.begin(), evens.end());
    sort(odds.begin(), odds.end(), greater<int>());
    for (int num : evens)
        cout << num << "\t";
    for (int num : odds)
        cout << num << "\t";

    return 0;
}