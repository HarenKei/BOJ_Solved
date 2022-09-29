#include <bits/stdc++.h>

using namespace std;

int n;
set<string> company;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        string name, stat;
        cin >> name >> stat;

        if(stat == "enter"){
            company.insert(name);
        } else{
            company.erase(name);
        }
    }
    

    for(auto iter = company.rbegin(); iter != company.rend(); iter++){
        cout << *iter << '\n';
    }




}