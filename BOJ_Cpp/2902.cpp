#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string sStr;
    cin >> sStr;
    cout << sStr[0];

    for(int i = 1; i < sStr.length(); i++){
        if(sStr[i] == 45)
            cout << sStr[i+1];
    }
    cout << endl;
    
    return 0;
}