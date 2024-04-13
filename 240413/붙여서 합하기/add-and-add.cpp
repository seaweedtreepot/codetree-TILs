#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin >> a >> b;
    string temp = b;

    b = a + b;
    a = temp + a;

    int sum = stoi(b) + stoi(a);

    cout << sum;
    return 0;
}