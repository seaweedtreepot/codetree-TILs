#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    string ans[100];
    int cnt =0;
    int i = 0;
    while(1){
        cin >> a;
        if(a == "0"){
            break;
        }
        if(cnt%2==0){
            ans[i++] = a;
           // cout << ans[i-1] << endl;
        }
        cnt++;
    }
    cout << cnt << endl;
    for(int j = 0; j < i; j++){
        cout << ans[j] << endl;
    }
    return 0;
}