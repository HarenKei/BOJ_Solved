#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    cin >> testCase;

    for(int i = 0 ; i < testCase; i++){
        int p = 0, m = 0;
        vector<int> chair;
        cin >> p >> m;

        for(int j = 0 ; j < p; j++){
            int nNum = 0 ;
            cin >> nNum;
            chair.push_back(nNum);
        }

        sort(chair.begin(), chair.end());
        chair.erase(unique(chair.begin(), chair.end()), chair.end());
        cout << p - chair.size() << endl;
    }
    return 0;
}