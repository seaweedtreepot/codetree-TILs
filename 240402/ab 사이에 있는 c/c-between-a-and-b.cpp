#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b,c;
    bool flag = false;
    cin >> a >> b >> c;
    for(int i = a; i <b +1; i++){
        if(i%c==0){
            flag = true;
        }
    }

    cout << (flag?"YES":"NO");
    return 0;
}