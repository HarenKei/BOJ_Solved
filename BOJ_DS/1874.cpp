#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> st;
    string pnm;
    int cnt = 1;
    int nCase;
    cin >> nCase;
    
    int k = nCase;

    while(k--){
        int num;
        cin >> num;

        while(cnt <= num){
                st.push(cnt);
                cnt++;
                pnm += '+';
            
        } if(st.top() == num){
            st.pop();
            pnm += '-';
        } else{
            cout << "NO" << '\n';
            return 0;
        }
    }

    for(int i = 0; i < pnm.length(); i++){
        cout << pnm[i] << '\n';
    }

    return 0;
}