#include <bits/stdc++.h>
#include <string.h>

using namespace std;

vector<string> myChess;

string vec_wb[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
    };

string vec_bw[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
    };

int chkWhite(int x, int y){
    int cnt = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(myChess[x+i][y+j] != vec_wb[i][j]) 
                cnt++;
        }   
    }
    return cnt;
}

int chkBlack(int x, int y){
    int cnt = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(myChess[x+i][y+j] != vec_bw[i][j])
                cnt++;
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    int temp = 0;
    int minVal = 999;
    
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        myChess.push_back(str);
    }

    for(int x = 0; x <= n - 8; x++){
        for(int y = 0; y <= m - 8; y++){ //자를 수 있는 시작점의 개수만큼 반복.
            temp = min(chkBlack(x, y), chkWhite(x, y));
            if(temp < minVal){
                minVal = temp;
            }
        }
    }
    
    cout << minVal << '\n';

    return 0;
}