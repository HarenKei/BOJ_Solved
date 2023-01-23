#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    while(n--){
        int t;
        cin >> t;
        map<long long, int> army;

        for(int j = 0; j < t; j++){
            long long num;
            cin >> num;
            
            if(army.find(num) == army.end()){
                //map에 해당 번호를 가진 군대의 병사가 존재하지 않을 경우
                //해당 번호를 key로 갖는 쌍을 map에 삽입
                army.insert(make_pair(num, 1));
            } else{
                //map에 해당 번호를 가진 군대의 병사가 존재할 경우
                //해당 번호를 key로 갖는 value를 증가
                army.find(num)->second++;
            }
        }
        int maxVal = 0; //가장 큰 value를 판별하기 위함.
        long long result = 0; //가장 큰 value를 가지는 key를 저장하기 위함.

        for(auto it = army.begin(); it != army.end(); it++){
            //반복자를 이용하여 순회하며 최대값 판별
            if(it->second > maxVal){
                maxVal = it->second;
                result = it->first;
            }
        }

        if(maxVal > (t/2)){
            cout << result << "\n";
        } else {
            cout << "SYJKGW\n";
        }
    }
    return 0;
}