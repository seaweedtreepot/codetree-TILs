#include <iostream>
using namespace std;

void Cal(int &a, int &b){
    if(a>b){
        b+=10;
        a *= 2;
    }else{
        a+=10;
        b*=2;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a>> b;
    Cal(a,b);

    cout << a << " " << b;
    return 0;
}