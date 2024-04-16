#include <iostream>
using namespace std;

bool IsMagic_num(int n){
    bool flag = false;
    if((n/10 + n%10)%5==0){
        flag = true;
    }
    if(n%2==0){
        flag = true;
    }


    return flag;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << (IsMagic_num(n)?"Yes":"No");
    return 0;
}