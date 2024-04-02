#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    char c;

    while(1){
        cin >> a >> b >> c;
        cout << a* b << "\n";
        if(c == 'C'){
            break;
        }
    }
    return 0;
}