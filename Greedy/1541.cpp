#include <bits/stdc++.h>

using namespace std;

string str, temp;
bool isMinus;
int sum;
int num;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == '-' || str[i] == '+'){ //연산 기호 등장
            if(isMinus){ //-가 나와있는 상태면 
                sum -= stoi(temp); //그럼 다 빼
                temp = "";
            } else{ //연산 기호가 +
                sum += stoi(temp); //그럼 빼지 말고 더해
                temp = "";
            }
        } else{ //연산기호가 아니라면 -> 숫자라면
            temp += str[i]; //문자열 Temp에 넣어 두, 세자리 숫자를 만든다.

        } if(str[i] == '-'){
            isMinus = true;
        }
    }
    
    if(isMinus){
        sum -= stoi(temp) ;
    } else{
        sum += stoi(temp);
    }

    cout << sum;

    return 0;

}