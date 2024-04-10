#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int n; cin >> str;
    cin >> n;

    for(int i = str.length()-1; i >=str.length()-n; i--){
        cout << str[i];
    }
    return 0;
}