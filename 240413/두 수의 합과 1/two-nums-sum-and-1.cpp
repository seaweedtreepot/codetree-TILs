#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    a += b;

    string c = to_string(a);
    int cnt = 0;

    for(int i = 0; i < c.length();i++){
        if(c[i]=='1'){
            cnt++;
        }
    }
    
    cout << cnt;
    return 0;
}