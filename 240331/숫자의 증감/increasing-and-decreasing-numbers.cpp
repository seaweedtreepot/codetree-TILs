#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char a;
    int b;
    cin >> a >> b;

    if(a == 'A'){
        for(int i = 1; i <= b;i++){
            cout << i << " ";
        }
    }else if (a=='D'){
        for(int i = b; i > 0 ; i--){
            cout << i << " ";
        }
    }
    return 0;
}