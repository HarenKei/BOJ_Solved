#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int result = 0;
    stack<char> st;
    string stick;
    cin >> stick;

    for(int i = 0; i < stick.length(); i++){
        if(stick[i] == '('){ //여는 괄호는 모두 push
            st.push(stick[i]);
        } else if(stick[i] == ')'){ 
            if(stick[i-1] == '('){ //닫는 괄호가 나왔고, 직전의 괄호가 여는 괄호였다면 '레이저'
                st.pop();
                result += st.size(); //레이저로 커팅되었을 때의 스택 개수가 쇠막대의 개수

            } else{ //닫는 괄호가 나왔고 직전 괄호가 여는 괄호가 아니었다면 '쇠막대의 끝'
                st.pop();
                result++; //자른 왼쪽의 개수만 카운트되었으므로, 오른쪽의 한 개의 조각을 추가로 더해줌.
            }
        }
    }

    cout << result << '\n';

    return 0;
}