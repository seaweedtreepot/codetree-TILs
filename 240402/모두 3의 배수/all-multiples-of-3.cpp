#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int b;
    bool flag = true;

    for(int i = 0; i < 5; i++){
        cin >>b;
        if(b%3!=0){
            flag = false;
            break;
        }
    }

    cout << (flag?1:0);
    return 0;
}