#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int start, end;
    int cnt=0;
    cin >> start >> end;
    for(int i = start; i <= end; i++){
        int weak_cnt=0;
        for(int j = 1;  j <= i; j++){
            if(i%j==0){
                weak_cnt ++;
            }
        }
        if (weak_cnt==3){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}