#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

int primeArray[MAX];
vector<int> primeNum;

void eratos(){
    

    for(int i = 2; i <= MAX; i++){
        primeArray[i] = i;
    }

    for(int i = 2; i * i <= MAX; i++){
        if(primeArray[i] == i){
            for(int j = i * i; j <= MAX; j += i){
                primeArray[j] = i;
            }
        }
    }

    //ㅁ
    for(int i = 2; i <= MAX; i++){
        if(primeArray[i] == i){
            primeNum.push_back(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, ans = 0;
    cin >> a >> b;
    eratos();

    for(int i = a; i <= b; i++) {
        int cnt = 0, num = i;

        for(int j = 0; j < primeNum.size(); j++) {
            while(!(num % primeNum[j])) {
                cnt ++;
                num /= primeNum[j];

                if(num == 1) break;
            }
            if(num == 1) break;
        }
        if(primeArray[cnt] == cnt) ans++;
    }

    cout << ans << "\n";

    return 0;
}