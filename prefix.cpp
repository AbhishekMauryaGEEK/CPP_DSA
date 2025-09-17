#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculateScore(int N, vector<pair<int, int>> submissions) {
    vector<int> maxScores(8, 0); 
    for (int i = 0; i < N; ++i) {
        int p = submissions[i].first;
        int s = submissions[i].second;

        if (p >= 1 && p <= 8) {
            maxScores[p - 1] = max(maxScores[p - 1], s);
        }
    }

    int totalScore = 0;
    for (int score : maxScores) {
        totalScore += score;
    }

    return totalScore;
}
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<pair<int, int>> submissions(N);
        for (int i = 0; i < N; ++i) {
            cin >> submissions[i].first >> submissions[i].second;
        }
        cout << calculateScore(N, submissions) << endl;
    }
    return 0;
}
