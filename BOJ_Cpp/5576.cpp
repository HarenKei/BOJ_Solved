#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> wUniv;
    vector<int> kUniv;

    for(int i = 0 ; i < 10; i ++){
        int score=0;
        cin >> score;
        wUniv.push_back(score);
    }
    for(int j = 0; j < 10; j++){
        int score = 0;
        cin >> score;
        kUniv.push_back(score);
    }
    sort(wUniv.begin(), wUniv.end());
    sort(kUniv.begin(), kUniv.end());

    cout << wUniv[7] + wUniv[8] + wUniv[9] << " " << kUniv[7] + kUniv[8] + kUniv[9] << endl;

    return 0;
}