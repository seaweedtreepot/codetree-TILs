#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,c,g,h;
    cin >> n>>c>>g>>h;

    int ta,tb;
    pair<int,int> temperate[1000];

    for(int i = 0; i < n; i++){
        cin >> ta >> tb;
        temperate[i] = make_pair(ta,tb);
    }
    int max_work = 0;
    for(int i = 0; i < 1001; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(i < temperate[j].first){
                cnt += c;
            }else if(i > temperate[j].second){
                cnt += h;
            }else{
                cnt += g;
            }
        }
        if(max_work < cnt){
            max_work = cnt;
        }
    }
    cout << max_work;
    return 0;
}