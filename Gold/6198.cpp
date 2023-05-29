#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    long long ans = 0;
    stack<int> st;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;

        if(st.empty()) {
            st.push(input);
        }

        while(!st.empty() && st.top() <= input) {
            st.pop();
        }

        ans += st.size();

        st.push(input);
    }

    cout << ans << "\n";

    return 0;
}
