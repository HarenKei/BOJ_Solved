#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    cin >> testCase;

    for(int i = 0 ; i < testCase; i++){
        vector<int> numArray;
        for(int j = 0; j < 10; j++){
            int num = 0;
            cin >> num;
            numArray.push_back(num);
        }
        sort(numArray.begin(), numArray.end());
        cout << numArray[7] << endl;
    }
    return 0;
}