#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<char> st;
    string str;
    int tmp = 1, result = 0;
    
    cin >> str;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == '('){
            tmp *= 2;
            st.push('(');
        } else if(str[i] == '['){
            tmp *= 3;
            st.push('[');
        } else if(str[i] == ')' && (st.top() != '(' || st.empty())){
            result = 0;
            break;
        } else if(str[i] == ']' && (st.top() != '[' || st.empty())){
            result = 0;
            break;
        } else if(str[i] == ')'){
            if(str[i-1] == '('){
                result += tmp;
            }
            st.pop();
            tmp /= 2;
        } else if(str[i] == ']'){
            if(str[i-1] == '['){
                result += tmp;
            }
            st.pop();
            tmp /= 3;
        }
    }
              
    if(!st.empty()) result = 0;
    
    cout << result << '\n';

}
    

