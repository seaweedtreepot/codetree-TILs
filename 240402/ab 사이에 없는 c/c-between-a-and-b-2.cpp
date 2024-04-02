#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b c;
    cin >> a>> b>> c;
    bool flag = true;
    for(int i = a; i < b +1; i++){
        if(c%i == 0){
            flag = false;
            break;
        }
    }

    cout << (!flag:"YES":"NO");
    return 0;
}