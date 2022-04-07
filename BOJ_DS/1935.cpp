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
        //vec.push_back(num);
    

    for(int j = 0; j < str.length(); j++){
        if (str[j] == '+' || str[j] == '-' || str[j] == '*' || str[j] == '/'){
            double b = st.top();
            st.pop();
            double a = st.top();
            st.pop();

            switch (str[j]){
                case '+':
                    st.push(a + b);
                    break;
                case '-':
                    st.push(a - b);
                    break;
                case '*':
                    st.push(a * b);
                    break;
                case '/':
                    st.push(a / b);
                    break;
            }
        } else{
            st.push(str[j]=num);
        }
    }
    }
    double result = st.top();

        cout << fixed;

        cout.precision(2);

        cout << result << "\n";

        return 0;

}