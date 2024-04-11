#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    string ob_str;
    int strt_inx = -1;
    cin >> str >> ob_str;
    for(int i = 0; i <= str.length()-ob_str.length();i++){
        //cout << str.substr(i,ob_str.length()) << endl;
        if(str.substr(i,ob_str.length())==ob_str){
            strt_inx = i;
            break;
        }
    }

    cout << strt_inx ;
    return 0;
}