#include <bits/stdc++.h>

using namespace std;

string str;
string ansStr;
bool chk;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    getline(cin, str);


    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'U' && ansStr.empty()){
            ansStr+= 'U';
        } else if(str[i] == 'C' && ansStr == "U"){
            ansStr += 'C';
        } else if(str[i] == 'P' && ansStr == "UC"){
            ansStr += 'P';
        } else if(str[i] == 'C' && ansStr == "UCP"){
            ansStr += 'C';
            chk = true;
        }
    }

    if(ansStr == "UCPC"){
        cout << "I love UCPC" << '\n';
    } else {
        cout << "I hate UCPC" << '\n';
    }

    return 0;
    
}