#include <bits/stdc++.h>

using namespace std;

int n, m;
int dnaCnt[51][4];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        string gene;
        cin >> gene;

        for(int j = 0; j < m; j++){
            switch (gene[j]){
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

    string ans = "";
    int ansCnt = 0;

    for(int i = 0; i < m; i++){
        int maxIdx = 0, maxCnt = 0;

        for(int j = 0; j < 4; j++){
            if(dnaCnt[i][j] > maxCnt){
                maxCnt = dnaCnt[i][j];
                maxIdx = j;
            }
        }
        ansCnt += (n - maxCnt);

        switch (maxIdx)
        {
        case 0:
            ans += 'A';
            break;
        case 1:
            ans += 'C';
            break;
        case 2:
            ans += 'G';
            break;
        case 3:
            ans += 'T';
            break;
        }
    }

    cout << ans << "\n";
    cout << ansCnt << "\n";

    
    return 0;
}