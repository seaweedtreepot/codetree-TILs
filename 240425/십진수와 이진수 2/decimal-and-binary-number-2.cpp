#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    int arr[10];
    cin >> N;
    int ans=0;
    int idx=0;
    while(N!=0){
     arr[idx++] = N%10;
     N/=10;   
    }
   // cout << "1 " <<endl;
    for(int i = idx-1; i >=0; i--){
        ans*=2;
        ans += arr[i];
    }
   // cout << "1 " <<endl;
    ans *= 17;
    idx = 0;
    while(ans!=0){
        arr[idx++] = ans%2;
        ans/=2;
    }
    //cout << "1 " <<endl;
    for(int i = idx -1; i >=0; i--){
        cout << arr[i];
    }
   // cout << "1 " <<endl;
    return 0;
}