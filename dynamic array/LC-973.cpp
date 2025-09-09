#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    static bool cmp(vector<int> p, vector<int> q) {
        double d1 = (p[0]*p[0] + p[1]*p[1]);
        double d2 = (q[0]*q[0] + q[1]*q[1]);
        return d1 < d2;
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(), points.end(), cmp);
        vector<vector<int>> answer;
        for (int i = 0; i < k; i++) {
            answer.push_back(points[i]);
        }
        return answer;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> points = {{3, 3}, {5, -1}, {-2, 4}};
    int k = 2;

    vector<vector<int>> result = sol.kClosest(points, k);

    cout << "K Closest Points:\n";
    for (auto& p : result) {
        cout << "[" << p[0] << ", " << p[1] << "]\n";
    }

    return 0;
}