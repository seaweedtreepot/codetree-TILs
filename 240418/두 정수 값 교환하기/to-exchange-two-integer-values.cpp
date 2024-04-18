#include <iostream>
using namespace std;

void ChangeVal(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b= temp;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    ChangeVal(&a, &b);
    cout << a << " " << b;
    return 0;
}