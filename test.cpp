#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    int dnaCnt[51][4];
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        string gene;
        cin >> gene;



        for(int j = 0; j < m; j++){
            switch (gene[j])
            {
            case 'A':
                dnaCnt[j][0]++;
                break;
            case 'C':
                dnaCnt[j][1]++;
                break;
            case 'G':
                dnaCnt[j][2]++;
                break;
            case 'T':
                dnaCnt[j][3]++;
                break;
            }
        }
    }

    int ansCnt = 0;
    string ans = "";

    for(int i = 0; i < m; i++){
        int idx = 0, maxCnt = 0;

        for(int j = 0; j < 4; j++){
            if(dnaCnt[i][j] > maxCnt){
                idx = j;
                maxCnt = dnaCnt[i][j];
            }
        }

        cout << "idx : " << idx << endl;
        cout << "maxCnt : " << maxCnt << endl;

        ansCnt += (n - maxCnt);

        cout << "ansCnt : " << ansCnt << endl;

        
    }

    cout << ans << "\n";
    cout << ansCnt << "\n";
    
    return 0;
}