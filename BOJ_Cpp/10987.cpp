#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string sVowel = "aeiou";
    string sStr;
    int nCnt = 0;

    cin >> sStr;

    for(int i = 0; i < sStr.length(); i++){
        for(int j = 0; j < sVowel.length(); j++){
            if(sStr[i] == sVowel[j])
                nCnt++;
        }
    }
    cout << nCnt << endl;

    return 0;
}