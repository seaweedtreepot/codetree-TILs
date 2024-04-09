#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str, str2;
    cin >> str >> str2;

    str+= str2;
    cout << str.length();
    return 0;
}