#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string n_str = to_string(n);
    int sum = 0;
    for(int i = 0; i <n_str.length(); i++){
        sum += n_str[i]-'0';
    }
    cout << sum;
    return 0;
}