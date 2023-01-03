#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> vec;

    for(int i = 0; i < 3; i++){
        int input;
        cin >> input;
        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());

    cout << vec[1] << '\n';


    return 0;
}