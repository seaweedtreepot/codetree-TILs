#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a , b ,c;
    cin >> a >> b >>c ;
    cout << (((a>b)?b:a) > c ? c : ((a>b)?b:a));
    return 0;
}