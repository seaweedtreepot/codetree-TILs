#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int i = 0;
    int temp = 0;
    temp = a%b;
    //cout << temp ;
    cout << a/b;
    a = temp;
    a*=10;
    cout << '.';
   while(i < 20){
        temp = a%b;
        cout << a/b;
        a = temp;
        a*=10;
    i++;
   }
   
    return 0;
}