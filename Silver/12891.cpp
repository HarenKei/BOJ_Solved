#include <bits/stdc++.h>

using namespace std;

int check[4]; // ACGT 체크용 배열
int window[4]; // 슬라이딩 윈도우 내 체크용
void AddNum(char c);
void RemoveNum(char c);
int checkCnt = 0; // 체크 수, ACGT 모두 맞다면 4
int result = 0; // 결과, 체크 수 4가 될 시 1 증가

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int s, p; 
    string input;

    cin >> s >> p;
    cin >> input;

    for(int i = 0; i < 4; i++) {
        cin >> check[i];
        
        if(check[i] == 0) {
            // ACGT 중 최소 개수가 0이라면 일단 1가지는 모두 통과하므로 초기 설정
            checkCnt++;
        }
    }

    for(int i = 0; i < p; i++) {
        // 맨 처음 슬라이딩 윈도우 범위 내 문자열을 추가
        AddNum(input[i]);
    }

    if(checkCnt == 4) result++;

    for(int end = p; end < s; end++) {
        int start = end - p;
        AddNum(input[end]);
        RemoveNum(input[start]);

        if(checkCnt == 4) {
            result++;
        }
    }

    cout << result << "\n";
    return 0;
}

void AddNum(char c) {
    switch (c)
    {
    case 'A':
        window[0]++;
        if(check[0] == window[0]) 
            checkCnt++;
        break;
    case 'C':
        window[1]++;
        if(check[1] == window[1])
            checkCnt++;
        break;
    case 'G':
        window[2]++;
        if(check[2] == window[2])
            checkCnt++;
        break;
    case 'T':
        window[3]++;
        if(check[3] == window[3])
            checkCnt++;
        break;
    }
}

void RemoveNum(char c){
    switch (c)
    {
    case 'A':
        if(check[0] == window[0])
            checkCnt--;
        window[0]--;
        break;
    case 'C':
        if(check[1] == window[1])
            checkCnt--;
        window[1]--;
        break;
    case 'G':
        if(check[2] == window[2])
            checkCnt--;
        window[2]--;
        break;
    case 'T':
        if(check[3] == window[3])
            checkCnt--;
        window[3]--;
        break;
    }
}

