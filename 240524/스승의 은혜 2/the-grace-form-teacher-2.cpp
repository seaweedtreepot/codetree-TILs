#include <iostream>
#include <cstdlib>
#include <utility>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,b;
    int stdt[1000];
    int max = 0;
    cin >> n >> b;

    for(int i = 0;i < n; i++){//p(i)삽입
        cin >> stdt[i];
    }
    sort(stdt,stdt+n);
    for(int i = 0; i < n; i++){//할인
        int cnt = 0;
        int price = 0;
        for(int j = 0; j < n; j++){//시작
            if(i==j){
                price+=stdt[j]/2;
            }else{
                price += stdt[j];
            }
            if(price > b){
                break;
            }else{
                cnt++;
            }
        }
        if(cnt > max){
            max = cnt;
        }
    }

    cout << max;
    return 0;
}