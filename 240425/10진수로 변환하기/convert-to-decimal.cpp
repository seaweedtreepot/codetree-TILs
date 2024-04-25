#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    int ans = 0;
    int bi[8];
    int idx =0;
    while(a!=0){
        bi[idx++]=a%10;
        a/=10;
    }
    for(int i = idx-1; i >=0; i--){
        ans*=2;
        ans+=bi[i];
    }
    cout << ans ; 
    return 0;
}