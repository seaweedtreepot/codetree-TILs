#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;


    for(int i =0; i < a.length(); i++){
        if(a[i]>='0' && a[i]<='9'){
            cout << a[i];
        }else if(a[i]>='a' && a[i]<='z'){
            cout << a[i];
        }else if(a[i]>='A' && a[i] <='Z'){
            cout << char(a[i]-('A' - 1) + 'a'-1);
        }
    }
    return 0;
}