#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack< pair<int, int> > st;
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        int num;
        cin >> num;

        while(!st.empty() && num > st.top().first){
                st.pop();
        }

        if(st.empty()){
            cout << 0 << " ";
        } else{
            cout << st.top().second << " ";
        }
         st.push(make_pair(num, i));
    
            
    }


    return 0;
}