#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char vowel[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    while(1){
        string str;
        int cnt = 0;
        getline(cin, str);
        
        if(str == "#") return 0;

        for(int i = 0; i < str.length(); i++){
            for(int j = 0; j < 10; j++){
                if(str[i] == vowel[j]) cnt++;
            }
        }

        cout << cnt << '\n';
    }
    


    return 0;
}