#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    vector<int> vec;

    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());

    int findNum;
    cin >> findNum;

    for(int i = 0; i < findNum; i++){
        int card;
        cin >> card;
        int upper = upper_bound(vec.begin(), vec.end(), card) - vec.begin();
        int lower = lower_bound(vec.begin(), vec.end(), card) - vec.begin();
        
        cout << upper - lower << " ";
    }
    cout << '\n';

    return 0;
}