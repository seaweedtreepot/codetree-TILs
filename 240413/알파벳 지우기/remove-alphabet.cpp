#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a, a_1, b, b_1;

    cin >> a >> b;
    for(int i = 0; i < a.length(); i++){
        if('0'<=a[i] && a[i] <= '9'){
            a_1 += a[i];
        }
    }

    for(int i = 0; i < b.length(); i++){
        if('0'<=b[i] && b[i] <= '9'){
            b_1 += b[i];
        }
    }
    int sum = stoi(b_1) + stoi(a_1);
    cout << sum;
    return 0;
}