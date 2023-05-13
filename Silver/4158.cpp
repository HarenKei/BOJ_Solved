#include <bits/stdc++.h>

using namespace std;  


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1) {
        int n, m, idxn = 0, idxm = 0, ans = 0;
        vector<int> vn, vm;
        cin >> n >> m;

        if(n == 0 && m == 0) break;

        for(int i = 0; i < n; i++) {
            int input;
            cin >> input;
            vn.push_back(input);
        }

        for(int i = 0; i < m; i++) {
            int input;
            cin >> input;
            vm.push_back(input);
        }

        while(1) {
            if(idxn == vn.size() || idxm == vm.size()) {
                break;
            } else if(vn[idxn] < vm[idxm]) {
                idxn++;
            } else if(vm[idxm] < vn[idxn]) {
                idxm++;
            } else {
                idxn++;
                idxm++;
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}