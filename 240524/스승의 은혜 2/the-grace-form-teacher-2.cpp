#include <iostream>
#include <cstdlib>
#include <utility>
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

    for(int i = 0; i < n; i++){//할인
        int cnt = 0;
        int price = 0;
        for(int j = i; j < n; j++){//시작
            for(int k = j; k < n; k++){//더하기
                if(k==i){
                    if(price + stdt[k]/2>b){
                        continue;
                    }else{
                        price += stdt[k]/2;
                        cnt++;
                    }
                }else{
                    if(price + stdt[k]>b){
                        continue;
                    }else{
                        price += stdt[k];
                        cnt++;
                    }
                }
                if(max < cnt ){
                    max = cnt;
                }
            }
        }
    }

    cout << max;
    return 0;
}