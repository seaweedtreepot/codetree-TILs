#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char a,b;
    cin >> a>>b;

    cout <<a+b << " " << ((a>b)?a-b:b-a);
    return 0;
}