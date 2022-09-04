#include <bits/stdc++.h>

using namespace std;

int num;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> num;

    for(int i = 1; i < num; i++){
        int sum = i;
        int part = i;

        while(part){
            sum += part % 10;
            part /= 10;
        }

        if(sum == num){
            cout << i << '\n';
            return 0; 
        }
    }

    cout << 0 << '\n';

    return 0;
}