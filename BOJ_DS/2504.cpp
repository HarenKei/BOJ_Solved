#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<char> st;
    string str;
    int val = 1;
    int bigVal = 1;
    int result = 0;

    cin >> str;

    for(int i = 0; i < str.length(); i++){
       if(str[i] == '('){
           st.push(str[i]);
           val *= 2;
       } else if(str[i] == ')'){
           if(str[i-1] == '('){
               st.pop();
               result += val;
               val /= 2;
           } else if(st.empty()){
               result = 0;
               break;
           } else{
               val /= 2;
               st.pop();
           }
       } else if(str[i] == '['){
           st.push(str[i]);
           val *= 3;
       } else if(str[i] == ']'){
           if(str[i-1] == '['){
               st.pop();
               result += val;
               val /= 3;
           } else if(st.empty()){
               result = 0;
               break;
           } else{
               val /= 3;
               st.pop();
           }
       }
    }

    if(st.empty())
        result = 0;
    else
        cout << result << endl;

    return 0;
}