#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string sStr;
    getline(cin, sStr);

    for(int i = 0; i < sStr.length(); i++){
        if((sStr[i] >= 97 && sStr[i] <= 109) || (sStr[i] >= 65 && sStr[i] <= 77))
            sStr[i] += 13;
        else if ((sStr[i] >= 110 && sStr[i] <= 122) || (sStr[i] >= 78 && sStr[i] <= 90))
            sStr[i] -= 13;
    }

    cout << sStr << endl;

    return 0;
}