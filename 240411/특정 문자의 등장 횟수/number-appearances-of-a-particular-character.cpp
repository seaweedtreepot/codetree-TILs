#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int ee_cnt = 0, eb_cnt = 0;
    string str;
    cin >> str;

    for(int i = 0; i < str.length()-1; i++){
       // cout << str.substr(i,2) << endl;
        if(str.substr(i,2)=="ee"){
            ee_cnt++;
        }else if(str.substr(i,2)=="eb"){
            eb_cnt++;
        }
    }

    cout << ee_cnt << " " << eb_cnt;
    return 0;
}