#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        string str;
        cin >> str;
        stack<char> st;
\
        for(int j = 0; j < str.length(); j++){ //입력된 괄호 문자열 길이만큼 반복
            if(str[j] == '(' || st.empty() || st.top() == '('){ //만약 입력이 '(' 거나, 스택 top의 값이 '('거나, 스택이 비어있다면 push
                    st.push(str[j]);
            } else if(st.top() == '(' && !st.empty()) { //
                    st.pop();
            }
        }
        if(!st.empty())
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    
}