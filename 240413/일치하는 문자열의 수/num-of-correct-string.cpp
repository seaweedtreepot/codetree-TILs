#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string A;
    cin >> n >> A;
    string k;
    int cnt =0;
    for(int i = 0; i < n; i++){
        cin >> k;
        if(k == A){
            cnt ++;
        }
    }

    cout << cnt;
    return 0;
}