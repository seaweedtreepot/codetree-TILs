#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str1;
    getline(cin,str1);
    for(int i = 2; i < 10; i++){
        cout << str1[i];
    }
    return 0;
}