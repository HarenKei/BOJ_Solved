#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0;
    int num;
    cin >> num;

    while(num > 0){
        stack<char> st;
        string str;
        cin >> str;

        for(int i = 0; i < str.length(); i++){
            if(st.empty()){
                st.push(str[i]);
            } else if(st.top() == str[i]){
                st.pop();
            } else{
                st.push(str[i]);
            }
        }

        if(st.empty())
            cnt++;

        num--;
    }

    cout << cnt << '\n';


    return 0;
    
}