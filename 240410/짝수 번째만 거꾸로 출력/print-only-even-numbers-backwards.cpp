#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    int i = 0;
    if(str.length()%2==0){
        i = str.length()-1;
    }else{
        i = str.length()-2;
    }
    for(;i >= 0; i-=2){
        cout << str[i];
    }
    return 0;
}