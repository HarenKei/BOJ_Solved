#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int caseNum;
    vector<int> numArr;

    cin >> caseNum;

    for(int i = 0 ; i < caseNum; i++){
        int num = 0;
        cin >> num;
        numArr.push_back(num);
    }

    int maxNum = *max_element(numArr.begin(), numArr.end());
    int minNum = *min_element(numArr.begin(), numArr.end());

    cout << minNum << " " << maxNum << endl;
}