#include <bits/stdc++.h>

using namespace std;
int scoreSum;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    for(int i = 0; i < 5; i++){
        int scoreInput;
        cin >> scoreInput;
        scoreSum += scoreInput;
    }

    cout << scoreSum << '\n';
    
    return 0;
}