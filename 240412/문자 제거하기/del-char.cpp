#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    int b;
    while(1!= a.length()){
        cin >> b;
        if(b >= a.length()){
            a.erase(a.length()-1,1);
        }else{
            a.erase(b,1);
        }


        cout << a << endl;
    }
    return 0;
}