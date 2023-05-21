#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, ans = 0;
    stack<int> st;

    cin >> n;

    for(int i = 0; i <= n; i++) {
        int x, y;
        if(i != n) cin >> x >> y;
        else y = 0;

        while(!st.empty() && st.top() >= y) {
            if(st.top() != y) ans++;
            st.pop();
        }
        st.push(y);
    }

    cout << ans << "\n";

    return 0;
}