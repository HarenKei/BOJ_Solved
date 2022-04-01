#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string sStr = "";

    while(1){
        
        getline(cin, sStr);
        
        if(sStr == "END")
            break;

        reverse(sStr.begin(), sStr.end());
        cout << sStr << endl;
    }

    return 0;
}