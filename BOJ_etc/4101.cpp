#include <bits/stdc++.h>

using namespace std;

int t;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        int num1 = 0, num2 = 0;
        cin >> num1 >> num2;

        if(num1 == 0 && num2 == 0)
            break;

        if(num1 > num2){
            cout << "Yes\n";
        } else{
            cout << "No\n";
        }

    }
    return 0;
}