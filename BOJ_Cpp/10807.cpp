#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> numArray;
    int caseNum;

    cin >> caseNum;

    for(int i = 0; i < caseNum; i++){
        int inputNum;
        cin >> inputNum;
        numArray.push_back(inputNum);
    }

    int vNum;
    cin >> vNum;

    cout << count(numArray.begin(), numArray.end(), vNum) << endl;

    return 0;
}