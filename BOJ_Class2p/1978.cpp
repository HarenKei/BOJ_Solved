#include <bits/stdc++.h>

using namespace std;

bool checkPrimeNum(int num){
    bool chk = true;
    int cnt = 0;

    if(num >= 2) {
        for(int i = 2; i <= num; i++){
            if(num % i == 0){
                cnt++;
            } 
        }
    } else{
        chk = false;
    }

    if(cnt >= 2) chk = false;
    return chk;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        if(checkPrimeNum(num)){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}