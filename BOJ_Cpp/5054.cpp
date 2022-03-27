#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int caseNum;
    cin >> caseNum;

    for(int i = 0 ; i < caseNum; i++){
        int storeCount = 0;
        vector<int> storeArray;
        cin >> storeCount;
        for(int j = 0 ; j < storeCount; j++){
            int storeNum = 0;
            cin >> storeNum;
            storeArray.push_back(storeNum);
        }
        sort(storeArray.begin(), storeArray.end());
        cout << (*max_element(storeArray.begin(), storeArray.end()) - *min_element(storeArray.begin(), storeArray.end())) *2 << endl;
    }
    return 0;
}