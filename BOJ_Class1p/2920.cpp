#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input = "";
    string ex = "12345678";
    string exR(ex.rbegin(), ex.rend());

    for(int i = 0; i < 8; i++){
        char num;
        cin >> num;
        input += num;
    }

    if(input == ex){
        cout << "ascending" << endl;
    } else if(input == exR){
        cout << "descending" << endl;
    } else{
        cout << "mixed" << endl;
    }

    return 0;
}