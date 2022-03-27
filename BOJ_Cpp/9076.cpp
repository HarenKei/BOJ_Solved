#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        vector<int> scoreArray;
        int sum = 0;

        for(int j = 0; j < 5 ; j++){
            int score = 0;
            cin >> score;
            scoreArray.push_back(score);
        }

        sort(scoreArray.begin(), scoreArray.end());
        scoreArray.erase(scoreArray.begin() + 0);
        scoreArray.erase(scoreArray.end() - 1);

        int maxScore = *max_element(scoreArray.begin(), scoreArray.end());
        int minScore = *min_element(scoreArray.begin(), scoreArray.end());

        if (maxScore - minScore >= 4) {
            cout << "KIN" << endl;
        } else{
            sum = scoreArray[0] + scoreArray[1] + scoreArray[2];
            cout << sum << endl;
        }
    }
    return 0;
}