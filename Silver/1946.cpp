#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        int minScore;
        int ans = 0;
        vector<pair<int, int> > score;
        cin >> n;

        for(int i = 0; i < n; i++){
            int scoreA, scoreB;
            cin >> scoreA >> scoreB;
            score.push_back(make_pair(scoreA, scoreB));
        }

        sort(score.begin(), score.end());
        minScore = score[0].second;
        ans++;

        for(int i = 1; i < n; i++){
            if(score[i].second < minScore){
                minScore = score[i].second;
                ans++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}