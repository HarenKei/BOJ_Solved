#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();

    for(int i = 1; i <= n; i++) {
        string input;
        stack<string> st;

        getline(cin, input);
        input += ' ';

        string tmp = "";
        for(int j = 0; j < input.length(); j++) {
            
            if(input[j] != ' ') {
                tmp += input[j];
            } else {
                tmp += " ";
                st.push(tmp);
                tmp = "";
            }
        }

        cout << "Case #" << i << ": ";
        while(!st.empty()) {
            cout << st.top();
            st.pop();
        }
        cout << "\n";

    }





    return 0;
}