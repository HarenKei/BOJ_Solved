#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> vec;

    for(int i = 0; i < 9; i++){
        int num;
        cin >> num;
        vec.push_back(num);
    }

    int maxNum = *max_element(vec.begin(), vec.end());
    int maxIndex = max_element(vec.begin(), vec.end())-vec.begin();

    cout << maxNum << endl;
    cout << maxIndex + 1 << endl;

    return 0;
}