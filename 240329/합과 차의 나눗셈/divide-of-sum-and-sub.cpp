#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    double a, b;
    cout << fixed;
    cout.precision(2);
    double f, s;
    cin >> a >> b;
    f = a+b;
    s = a-b;
    cout << f / s;
    return 0;
}