#include<bits/stdc++.h>

using namespace std;

int n;
int arr[1000001];
int ans[1000001];
stack<int> st;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for(int i = n; i >= 1; i--) {
        while(!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if(st.empty()) {
            ans[i] = -1;
        } else {
            ans[i] = st.top();
        }

        st.push(arr[i]);
    }

    for(int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
