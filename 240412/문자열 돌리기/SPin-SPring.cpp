#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    for(int i = 0; i < a.length();i++){
        a = a[a.length()-1] + a.substr(0,a.length()-1);
        cout << a << endl;
    }
    return 0;
}