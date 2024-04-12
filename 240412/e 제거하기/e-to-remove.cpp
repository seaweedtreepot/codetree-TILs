#include <iostream>
#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    a.erase(a.find("e"),1);
    cout << a;
    return 0;
}