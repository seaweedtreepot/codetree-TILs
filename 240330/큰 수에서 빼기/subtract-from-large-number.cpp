#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b = 0;
    cin >> a >> b;
    
    if((a - b)<0){
     int temp = a;
     a = b;
     b = temp;   
    }
    
    cout << a - b;
    return 0;
}