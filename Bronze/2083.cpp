#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        string name;
        int age, weight;

        cin >> name >> age >> weight;

        if(name == "#" && age == 0 && weight == 0) return 0;

        if(age > 17 || weight >= 80){
            cout << name << " " << "Senior\n";
        } else {
            cout << name << " " << "Junior\n";
        }
    }
    
    return 0;
}