#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> numArray;
    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        int inputNum = 0;
        cin >> inputNum;
        numArray.push_back(inputNum);
    }

    sort(numArray.begin(), numArray.end());

    for(int i = 0; i< testCase; i++){
        cout << numArray[i] << endl;
    }
    return 0;
}
