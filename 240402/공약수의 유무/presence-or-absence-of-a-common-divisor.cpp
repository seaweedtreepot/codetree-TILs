#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b; cin >> a>> b;
    bool flag = false;
    for(int i = a; i < b + 1 ; i ++){
        if(1920%i==0 && 2880%i==0 ){
            flag = true;
            break;
        }
    }

    cout << (flag?1:0);
    return 0;
}