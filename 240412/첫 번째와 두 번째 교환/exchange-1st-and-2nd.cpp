#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    char temp1, temp2;
    cin >> a;
    temp1 = a[0];
    temp2 = a[1];
    
    for(int i = 0; i < a.length(); i++){
        if(a[i]==temp1){
            a[i]=temp2;
        }else if(a[i]==temp2){
            a[i]=temp1;
        }
    }
    cout << a;
    return 0;
}