#include <bits/stdc++.h>

using namespace std;

int n;
vector<double> score;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        double input;
        cin >> input;
        score.push_back(input);
    }

    sort(score.begin(), score.end());

    cout.precision(3);
    cout << fixed;

    for(int i = 0; i < 7; i++){
        
        cout << score[i] << '\n';
    }


    return 0;
}