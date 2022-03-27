#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> numArray;
    int sum = 0;

    for(int i = 0; i < 5; i ++){
        int inputNum = 0;
        cin >> inputNum;
        numArray.push_back(inputNum);
        sum += numArray[i];
    }

    sort(numArray.begin(), numArray.end());
    cout << sum / 5 << endl << numArray[2] << endl;

    return 0;
}