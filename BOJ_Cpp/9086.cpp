#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        string sStr;
        cin >> sStr;
        cout << sStr[0] << sStr[sStr.length()-1] << endl;
    }
    return 0;
}