#include <bits/stdc++.h>
#define MAX 10001

using namespace std;

bool chk[MAX] = {false, };

int notSelfNum(int n){
    int res = n;

    while(n != 0){
        res += n % 10; //n의 1의자리를 집어넣는다.
        n /= 10; //n의 1의자리를 제거한다.
    }

    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for(int i = 1; i < MAX; i++){
        int tmp = notSelfNum(i);

        if(tmp < MAX){
            chk[tmp] = true; //셀프넘버가 아닌 수를 체크
        }
    }

    for(int i = 1; i < MAX; i++){
        if(!chk[i]) cout << i << '\n';
    }

    return 0;
}
