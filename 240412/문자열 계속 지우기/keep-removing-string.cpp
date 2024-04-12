#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a_str, b_str;
    cin >> a_str >> b_str;

    bool flag = true;
    while(flag){
        if(a_str.find(b_str)!=string::npos){
            a_str.erase(a_str.find(b_str),b_str.length());
        }else{
            cout << a_str;
            flag = false;
            break;
        }
    }
    return 0;
}