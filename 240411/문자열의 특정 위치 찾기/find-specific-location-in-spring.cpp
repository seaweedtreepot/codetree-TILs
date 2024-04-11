#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    char a;
    cin >> str >> a;

    if(str.find(a)!=string::npos){
        cout << str.find(a);
    }else{
        cout << "No";
    }
    return 0;
}