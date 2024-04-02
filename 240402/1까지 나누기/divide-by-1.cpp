#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int cnt =0;
    int n; cin >> n;
    int neck = n;
    for(int i = 1; i <=n; i++){
        neck /= i; cnt++;
        if(neck<=1){
            cout << cnt;
            break;
        }
    }
    return 0;
}