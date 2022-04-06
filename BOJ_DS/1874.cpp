#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> st;
    vector<int> pnm;
    int cnt = 0;
    int nCase;
    cin >> nCase;
    
    for(int i = 0; i < nCase; i++){
        int nNum;
        cin >> nNum;

        if(nNum >= cnt){
            int cnt2 = cnt;
            for(int j = cnt2+1; j <= nNum; j++){
                st.push(j);
                cnt++;
                pnm.push_back('+');
            }
        } if(nNum == st.top()){
            st.pop();
            pnm.push_back('-');
        } else{
            cout << "NO" << '\n';
            return 0;
        }
    }

    for(int i = 0; i < pnm.size(); i++){
        cout << (char)pnm[i] << '\n';
    }

    return 0;
}