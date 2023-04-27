#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> score;

    for(int i = 0; i < 3; i++) {
        int sco;
        cin >> sco;
        score.push_back(sco);
    }

    sort(score.begin(), score.end());

    cout << score[2] + score[1] << "\n";

    

    return 0;
}