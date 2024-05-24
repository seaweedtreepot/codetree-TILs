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

    for(int i = 0; i < n; i++){
        int cnt = 0;
        int price = 0;
        for(int j = 0; j < n; j++){
            if(i==j){
                price+= stdt[j]/2;
                cnt++;
            }else{
                price+=stdt[j];
                cnt++;
            }
            if(price <=b && cnt > max){
                max = cnt;
            }else if(price > b){
                break;
            }

        }
    }

    cout << max;
    return 0;
}