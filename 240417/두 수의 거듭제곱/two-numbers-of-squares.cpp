#include <iostream>
using namespace std;

int PowerOf(int a, int b){
    int prod = 1;
    for(int i = 0; i < b; i++){
        prod *= a;
    }
    return prod;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;

    cout << PowerOf(a,b);
    return 0;
}