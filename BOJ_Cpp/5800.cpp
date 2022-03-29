#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        vector<int> scoreVec;
        int classMember = 0;
        cin >> classMember;
        int maxScore = 0, minScore = 0;
        int lg = 0;

        for(int j = 0; j < classMember; j++){
            int score = 0;
            cin >> score;
            scoreVec.push_back(score);
        }
        sort(scoreVec.rbegin(), scoreVec.rend());
        maxScore = *max_element(scoreVec.begin(), scoreVec.end());
        minScore = *min_element(scoreVec.begin(), scoreVec.end());

        for(int k = 0; k < classMember-1; k++){
            if (lg < scoreVec[k] - scoreVec[k+1])
                lg = scoreVec[k] - scoreVec[k+1];
        }

        cout << "Class " <<  i + 1 << endl;
        cout << "Max " << maxScore << ", Min " << minScore << ", Largest gap " << lg << endl;
    }
    return 0;
}
