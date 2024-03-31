#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt=0;
    for(int i = 0; i< 5; i++){
        cin >> n;
        if(n%2==0){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}