#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    map<string, int> pokemon1; //입력이 이름일 때 번호를 출력하기 위함
    vector<string> pokemon2; //입력이 번호일 때 이름을 출력하기 위함
    vector<string> result;

    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        string input;
        cin >> input;

        pokemon1.insert(make_pair(input, i));
        pokemon2.push_back(input);
    }

    for(int i = 0; i < m; i++){
        string input;
        cin >> input;

        if(input[0] >= 65 && input[0] <= 90){
            //입력이 이름일 경우다. (이름은 첫 글자가 대문자)
            //결과를 담을 vector는 string형이기에 숫자도 string으로 변환하여 삽입
            result.push_back(to_string(pokemon1[input]));
        } else {
            //입력이 번호일 경우다.
            //입력은 string으로 들어오기에 int로 변환하여 인덱스로 넘겨준다.
            result.push_back(pokemon2[stoi(input) - 1]);
        }

    }

    for(auto iter = result.begin(); iter != result.end(); iter++){
        cout << *iter << "\n";
    }

    return 0;
}