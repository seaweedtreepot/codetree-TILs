#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str , cmd;
    cin >> str >> cmd;

    for(int i = 0; i < cmd.length();i++){
        if(cmd[i]=='L'){
            str = str.substr(1,str.length()-1) + str[0];
        }else if (cmd[i]=='R'){
            str = str[str.length()-1] + str.substr(0,str.length()-1);
        }
    }
    cout << str;
    return 0;
}