#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();

    while(t--){
        string input;
        stack<char> st;

        getline(cin, input);
        input += ' ';

        for(int i = 0; i < input.length(); i++){
            if(input[i] == ' '){
                while(!st.empty()){
                    cout << st.top();
                    st.pop();
                } 
                cout << input[i]; //공백 출력
            } else {
                st.push(input[i]);
            }
        }
    }
    
    return 0;
}