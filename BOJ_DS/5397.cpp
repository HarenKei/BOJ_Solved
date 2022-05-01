#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        string input;
        stack<char> st;
        stack<char> temp;

        cin >> input;

        for(int j = 0; j < input.length(); j++){
            
            if(input[j] == '-'){
                if (st.empty())
                    continue;
                else
                    st.pop();
            } else if(input[j] == '<'){
                if(st.empty())
                    continue;
                else{
                    temp.push(st.top());
                    st.pop();
                }
            } else if(input[j] == '>'){
                if(temp.empty())
                    continue;
                else{
                    st.push(temp.top());
                    temp.pop();
                }
            } else{
                st.push(input[j]);
            }
              
        }
        string output;
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }            
        while(!st.empty()){
            output += st.top();
            st.pop();
        }

        reverse(output.begin(), output.end());
        cout << output << '\n';
    }
    return 0;
}