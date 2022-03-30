#include <bits/stdc++.h>

using namespace std;

int main(){

    string sStr;
    cin >> sStr;

    for(int i = 0 ; i < sStr.length(); i++){
        if(sStr[i] >= 97 && sStr[i]<= 122)
            sStr[i] -= 32;
        else
            sStr[i] += 32;
    }

    cout << sStr << endl;
    return 0;
}