#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a ,b;
    int prod =1 ;

    cin >> a >> b;

    for(int i = 0; i < b; i++){
        prod*=a;
    }

    cout << prod;
    return 0;
}