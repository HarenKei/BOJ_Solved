#include <bits/stdc++.h>

using namespace std;

string hg[26] = {"aespa", "baekjoon", "cau", "debug", "edge", "firefox", "golang", "haegang", "iu", "java", "kotlin", "lol", "mips", "null", "os", "python", "query", "roka", "solvedac", "tod", "unix", "virus", "whale", "xcode", "yahoo", "zebra" };
string input;
string ans = "";
bool flag = true;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> input;
    
    for(int i = 0; i < input.length();){
        char curInput = input[i]; //input 문자열에서의 현재 위치
        string curHg = hg[input[i]-97]; //현재 위치의 알파벳의 hg 문자열 curInput이 a일시 hg[0] == aespa
        for(int j = 0; j < curHg.length(); j++){
            //curHg의 문자열의 길이만큼 비교

            //현재 input에서의 위치에서 비교해야할 hg코드와 비교.
            if(input[i + j] != curHg[j]){
                cout << "ERROR!\n";
                return 0;
            }
        }
        ans += curInput;
        i += curHg.length();
    }

    cout << "It's HG!\n";
    cout << ans << '\n'; 


    return 0;
}