#include <bits/stdc++.h>

using namespace std;

int n;
vector<long long> ans;

void solve(long long num, int lst) {
    for(int i = lst - 1; i >= 0; i--) {
        //마지막 수보다 1 작은 수부터 반복해야 감소하는 수가 성립됨.
        ans.push_back(num * 10 + i);
        //num = 32, lst = 2
        //num * 10 + 1 = 32 * 10 + 1 = 321 감소
        //num * 10 + 0 = 32 * 10 + 0 = 320 감소

        //num = 321, 1 재귀호출 -> 3210
        //num 320, 0, 재귀호출 -> 반복하지않음. ans에 들어가는 값 없음.
        solve(num * 10 + i, i);
        
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < 10; i++) {
        ans.push_back(i);
        //0~9까지의 한자리 수는 모두 감소하는 수.
        solve(i, i);
        //0~9로 시작하는 감소하는 수 찾기.
    }
    sort(ans.begin(), ans.end());

    if(n > 1022) {
        //마지막으로 감소하는 수인 9876543210은 1022번째 감소하는 수
        cout << -1 << "\n";
    } else {
        cout << ans[n] << "\n";
    }
    

    return 0;
}
