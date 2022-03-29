#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    for(int i = 0; i < 26; i++){
        cout << (int)str.find(i+97) << " ";
        
    }
    cout << endl;
    return 0;
}