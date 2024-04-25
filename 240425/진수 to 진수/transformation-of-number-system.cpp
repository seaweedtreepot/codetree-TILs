#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,n;
    cin >> a >> b >> n;
    int dec = 0;
    int idx = 0;
    int arr[20];

    while(n!=0){
        arr[idx++] = n%10;
        n/=10;
    }
    //cout << 1 << endl;
    for(int i = idx -1; i >=0; i--){
        dec*=a;
        dec+=arr[i];
    }
    //cout << dec << endl;
    idx = 0;
    while(dec!=0){
        arr[idx++] = dec%b;
        dec/=b;
    }
//cout << 1 << endl;
    for(int i = idx-1; i >= 0;i--){
        cout << arr[i];
    }
//cout << 1 << endl;
    return 0;
}