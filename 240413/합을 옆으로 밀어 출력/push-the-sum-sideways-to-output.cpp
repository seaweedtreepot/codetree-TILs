#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int a;
    int sum =0;
    for(int i = 0; i < n; i++){
        cin >> a;
        sum += a;
    }
   // cout << sum;
    string ans = to_string(sum);

    ans = ans.substr(1,ans.length()-1) + ans[0];
    cout << ans;
    return 0;
}