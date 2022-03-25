#include <bits/stdc++.h>

using namespace std;

int main(){
    int testCase;
    string goStr;

    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        int missIndex=0;
        cin >> missIndex >> goStr;
        cout << goStr.erase(missIndex-1, 1) << endl;
    }
    
}