#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;

    while(1){
        cin >> a;
        if(a == "END"){
            break;
        }

        for(int i = 0; i < a.length()/2; i++){
            char temp = a[i];
            a[i] = a[a.length()-i-1];
            a[a.length()-i-1] = temp;
        }
        cout << a << endl;
    }
    return 0;
}