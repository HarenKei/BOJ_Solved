#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> stack;
    int num;
    string str;

    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> str;

        //push
       if(str == "push"){
           int x = 0;
           cin >> x;
           stack.push(x);
       } else if(str == "pop"){ //pop
           if(stack.empty()){
               cout << -1 << endl;
           } else {
               cout << stack.top() << endl;
               stack.pop();
            }
       } else if(str == "size"){ //size
           cout << stack.size() << endl;
       } else if(str == "empty"){//empty
           if(stack.empty())
                cout << 1 << endl;
           else
                cout << 0 << endl;

        } else if(str == "top"){
            if(!stack.empty())
                cout << stack.top() << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}