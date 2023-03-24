#include <bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> score1;
    vector<int> score2;
    int sum = 0;

    for(int i = 0; i < 4; i++) {
        int input;
        cin >> input;
        score1.push_back(input);
    }

    for(int i = 0; i < 2; i++) {
        int input;
        cin >> input;
        score2.push_back(input);
    }

    sort(score1.begin(), score1.end(), greater<int>());
    sort(score2.begin(), score2.end(), greater<int>());

    for(int i = 0; i < 3; i++) {
        sum += score1[i];
    }

    sum += score2[0];

    cout << sum << "\n";



    return 0;
}