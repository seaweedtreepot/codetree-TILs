#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    bool flag = true;
    for(int i = 2; i < n;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }

    cout << (flag?"P":"C");
    return 0;
}