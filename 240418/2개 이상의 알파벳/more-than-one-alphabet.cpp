#include <iostream>
#include <string>
using namespace std;
bool IsMultiful(string a){
    bool flag = false;
    for(int i = 0; i < a.length()-1;i++){
        if(a[i]!=a[i+1]){
            flag = true;
            break;
        }
    }
    return flag;
}
int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;

    cout  << (IsMultiful(A)?"Yes":"No");
    return 0;
}