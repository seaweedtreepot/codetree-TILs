#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int prod=1;
    int a ,b;
    cin >> a >> b;

    for(int i = a; i <=b;i++){
        prod*=i;
    }

    cout << prod;
    return 0;
}