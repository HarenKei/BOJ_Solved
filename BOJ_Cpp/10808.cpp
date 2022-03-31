#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string sAlphabet = "abcdefghijklmnopqrstuvwxyz";
    vector<int> vCnt;
    string sStr;
    cin >> sStr;

    //baekjoon

    for(int i = 0; i < sAlphabet.length(); i++){
        int nCnt = 0;
        for(int j = 0; j < sStr.length(); j++){
            if(sAlphabet[i] == sStr[j]){ //b == a, a == 
                nCnt++;
                //continue;
            }
        }
        cout << nCnt << " ";
    }
    return 0; 
}