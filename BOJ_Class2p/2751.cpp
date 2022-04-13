#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    cin >> testCase;

    vector<int> vec;

    for(int i = 0; i < testCase; i++){
        int num = 0;
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end());

    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << '\n';
    }

    return 0;
}

