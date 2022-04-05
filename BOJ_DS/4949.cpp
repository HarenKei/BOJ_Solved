#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    

    while(1){
        stack<char> st;
        string str;
        getline(cin, str);
        bool result = true;

        if(str.length() == 1 && str[0] == '.')
            break;

        for(int i = 0; i < str.length(); i++){
            if(str[i] == '(' || str[i] == '['){
                st.push(i);
            } else if(str[i] == ')'){
                if(st.empty() || st.top() == '['){
                    result = false;
                } else{
                    st.pop();
                }
            } else if(str[i] == ']'){
                if(st.empty() || st.top() == '('){
                    result = false;
                } else{
                    st.pop();
                }
            }
        }

        if(st.empty() && result)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }

    return 0;
}