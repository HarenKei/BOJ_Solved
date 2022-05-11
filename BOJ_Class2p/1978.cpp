#include <bits/stdc++.h>

using namespace std;

bool returnChk(int num){
    bool chk = true;
    if(num < 2) chk = false;
    else{
    
        for(int i = 2; i <=num; i++){
            if(num % i == 0)
                chk = false;
            else
                chk = true;
        }
    }
    return chk;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int cnt = 0;
    bool chk = true;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        for(int j = 1; j <= num; j++){
            if(num % j == 0)
                cnt++;
        }
        if(cnt > 2){
            
        }
    }

    cout << cnt << endl;

    return 0;
}