#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> score;
    vector<int> subScore;
    vector<int> scoreIndex;
    int sum = 0;

    for(int i = 0 ; i < 8; i++){
        int inputScore = 0;
        cin >> inputScore;
        score.push_back(inputScore);
        subScore.push_back(inputScore);
        sum += inputScore;

    }

    sort(subScore.begin(), subScore.end());
    
    for(int j = 3; j < 8; j++){
        for(int k = 0; k < 8; k++){
            if(score[k] == subScore[j])
                scoreIndex.push_back(k+1);
        }
    }
    sort(scoreIndex.begin(), scoreIndex.end());
    cout << sum - subScore[0] - subScore[1] - subScore[2] << endl;
    for(int i = 0; i<5; i++){
        cout << scoreIndex[i] << " ";
    }
    return 0;
}