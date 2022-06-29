#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<string> vec_wb = {
                                "WBWBWBWB",
                                "BWBWBWBW",
                                "WBWBWBWB",
                                "BWBWBWBW",
                                "WBWBWBWB",
                                "BWBWBWBW",
                                "WBWBWBWB",
                                "BWBWBWBW",
    };

    vector<string> vec_bw = {
                                "BWBWBWBW",
                                "WBWBWBWB",
                                "BWBWBWBW",
                                "WBWBWBWB",
                                "BWBWBWBW",
                                "WBWBWBWB",
                                "BWBWBWBW",
                                "WBWBWBWB",                               
    };
    
    int n, m;
    vector<string> myChess;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        myChess.push_back(str);
    }
    
    int min = 65;
    
    for(int i = 0; i < n - 7; i++){
        for(int j = 0; j < m - 7; j++){
            int tempCnt = 0;

            if(myChess[i][j] == 'W'){
                for(int q = 0; q < 8; q++){
                    for(int z = 0; z < 8; z++){
                        for(int k = i; k < i + 7; k++){
                            for(int l = j; l < j + 7; j++){
                                if(myChess[k][l] != vec_wb[i+k][j+l]){
                                    tempCnt++;
                                    if(min > tempCnt) min = tempCnt;
                                }
                            }
                        }
                    }
                }
            } else{
                for(int q = 0; q < 8; q++){
                    for(int z = 0; z < 8; z++){
                        for(int k = i; k < i + 7; k++){
                            for(int l = j; l < j + 7; j++){
                                if(myChess[k][l] != vec_bw[i+k][j+l]){
                                    tempCnt++;
                                    if(min > tempCnt) min = tempCnt;
                                }
                            }
                        }
                    }
                }

            }
        }
    }

    cout << min << '\n';

    return 0;
}