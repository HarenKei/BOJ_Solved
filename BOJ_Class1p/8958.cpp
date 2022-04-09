#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        string oxquiz;
        cin >> oxquiz;
        int cntO = 0;
        int cntResult = 0;

        for(int j = 0; j < oxquiz.length(); j++){
            if(oxquiz[j] == 'O'){
                cntO ++;
                cntResult += cntO;
                
            } else{
                cntO = 0;
            }
        }
        cout << cntResult << endl;
    }
    return 0;
}