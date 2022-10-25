#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    bool student[30] = {false};

    for(int i = 0; i < 28; i++){
        int input;
        cin >> input;
        student[input-1] = true;
    }

    for(int i = 0; i < 30; i++){
        if(student[i] == false){
            cout << i + 1 << '\n';
        }
    }

    return 0;
}