#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;
    cout << max(abs(a-b)-1,abs(b-c)-1);
    return 0;
}