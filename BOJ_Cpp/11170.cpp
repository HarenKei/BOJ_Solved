#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    char zero = '0';
    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        int nNum, mNum;
        int cnt = 0;
        cin >> nNum >> mNum; //0 10
        
        for(int j = nNum; j <= mNum; j++){ // j = 0 ~ 9
            string sNum = to_string(j);

            for(int k = 0; k < sNum.length(); k++){
                if(sNum[k] == zero)
                    cnt++;
            }
        }
        cout << cnt << endl;
    }


}