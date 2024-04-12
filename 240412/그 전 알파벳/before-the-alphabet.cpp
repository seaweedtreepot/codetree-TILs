#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char a;cin>>a;

    if(a == 'a'){
        a = 'z';
    }else{
        a--;
    }
    cout << a;
    return 0;
}