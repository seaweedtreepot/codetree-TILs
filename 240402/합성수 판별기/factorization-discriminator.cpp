#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    bool flag = false;

    for(int i=2; i < n; i++){
        if(n%i==0){
            flag = true;
            break;
        }
    }

    cout << (flag?"C":"N");
    return 0;
}