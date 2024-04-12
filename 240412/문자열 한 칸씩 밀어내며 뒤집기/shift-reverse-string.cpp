#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int q;
    cin >> str >> q;

    int cmd = 0;
    for(int i = 0; i < q; i++){
        cin >> cmd;
        if(cmd == 1){
            str = str.substr(1,str.length()-1) + str[0];
            cout << str << endl;
        }else if (cmd == 2){
            str = str[str.length()-1] + str.substr(0,str.length()-1);
            cout << str << endl;
        }else if(cmd==3){
            for(int i = 0; i < str.length()/2;i++){
                char temp = str[i];
                str[i] = str[str.length()-1-i];
                str[str.length()-i-1] = temp;
            }
            cout << str << endl;
        }
    }
    return 0;
}