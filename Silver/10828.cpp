#include <bits/stdc++.h>

using namespace std;

stack<int> st;

void stPush(int n){
    st.push(n);
}

void stPop(){
    if(!st.empty()){
        int popNum = st.top();
        st.pop();
        cout << popNum << "\n";
    } else {
        cout << -1 << "\n";
    }
}

void stSize(){
    cout << st.size() << "\n";
}

void stEmpty(){
    if(!st.empty()){
        cout << 0 << "\n";
    } else {
        cout << 1 << "\n";
    }
}

void stTop(){
    if(st.empty()){
        cout << -1 << "\n";
    } else {
        cout << st.top() << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    

    cin >> n;

    while(n--){
        int n;
        string order;
        cin >> order;

        if(order == "push"){
            cin >> n;
            stPush(n);
        } else if(order == "pop"){
            stPop();
        } else if(order == "size"){
            stSize();
        } else if(order == "empty"){
            stEmpty();
        } else if(order == "top"){
            stTop();
        }

    }
    
    return 0;
}