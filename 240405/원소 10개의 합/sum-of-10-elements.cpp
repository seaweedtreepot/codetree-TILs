#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0;
    int a;

    for(int i = 0; i < 10; i++){
        cin >> a ;
        cnt += a;
    }

    cout << cnt;
    return 0;
}