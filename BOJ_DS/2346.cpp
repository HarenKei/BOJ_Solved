#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;
    deque< pair<int, int> > balloon;

    for(int i = 1; i <= num; i++){
        int n = 0;
        cin >> n;
        balloon.push_back(make_pair(i, n)); //first에는 풍선의 index, second에는 풍선 안의 종이의 숫자.
    }

    while(!balloon.empty()){
        pair<int,int> balloonBang = balloon.front();
        cout << balloonBang.first << " ";
        balloon.pop_front();

        if(balloonBang.second > 0){
            for(int i = 1; i < balloonBang.second ; i++){
                balloon.push_back(balloon.front());
                balloon.pop_front();
            }
        }else if(balloonBang.second<0){
            for(int i = 0; i > balloonBang.second; i-- ){
                balloon.push_front(balloon.back());
                balloon.pop_back();
            }
        }

    }
    return 0;
}
