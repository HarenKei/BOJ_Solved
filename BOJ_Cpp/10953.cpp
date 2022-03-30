#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        string sNum;
        cin >> sNum;
        
        cout << (sNum[0] - '0') + (sNum[2] - '0') << endl;
    }

    return 0;
}