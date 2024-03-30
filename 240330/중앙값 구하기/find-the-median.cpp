#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a>> b >> c;

    if(a > b ){
        if(a < c){
            cout << a;
        }
        else{
            if(c>b){
                cout << c;
            }
            else
                cout << b;
        }
    }
    else {
        if(b < c){
            cout << b;
        }
        else {
            if(c>a){
                cout << c;
            }
            else 
             cout << a;
        }
    }

    return 0;
}