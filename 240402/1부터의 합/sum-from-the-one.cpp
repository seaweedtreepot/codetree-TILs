#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt=0;

    for(int i=1; i <=100; i++){
        cnt += i;
        if(cnt>=n){
            cout << i;
            break;
        }
    }
    return 0;
}