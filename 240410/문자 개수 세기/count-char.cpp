#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    getline(cin, str);

    char a;
    cin >> a;

    int cnt = 0;
    for(int i = 0; i < str.length();i++){
        if(a == str[i]){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}