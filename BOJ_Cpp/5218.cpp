#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string sDis = "Distances: ";
    string str1, str2;
    int testCase;

    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        cin >> str1 >> str2;
        cout << sDis;
        for(int j = 0; j < str1.length(); j++){
            if(str1[j] > str2[j]){
                cout << (str2[j] + 26) - str1[j] << " ";
            } else{
                cout << str2[j] - str1[j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}