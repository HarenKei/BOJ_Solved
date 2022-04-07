#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string str;
    vector<double> vec;
    stack<double> st;

    cin >> n;
    cin >> str;

    

    for(int i = 0; i < n; i++){
        double num;
        cin >> num;
        vec.push_back(num);
    }

    for(int i = 0; i < str.length(); i++){
        if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
            double a, b;
            b = st.top();
            st.pop();
            a = st.top();
            st.pop();

            switch (str[i]){
            case '+': st.push(a + b); break;
            case '-': st.push(a - b); break;
            case '*': st.push(a * b); break;
            case '/': st.push(a /b ); break;
            }
        } else {
            st.push(vec[str[i] - 'A']);
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << st.top() << '\n';

    return 0;
}
