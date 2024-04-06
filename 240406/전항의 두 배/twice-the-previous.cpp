#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a ,b;
    cin >> a >> b;

    cout << a << " " << b << " ";

    for(int i = 2; i < 10; i++){
        int temp = 2*a + b;
        a = b;
        b = temp;
        cout << temp << " ";
    } 

    return 0;
}