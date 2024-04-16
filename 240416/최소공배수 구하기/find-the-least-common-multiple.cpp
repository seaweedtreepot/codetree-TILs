#include <iostream>
using namespace std;

void ShareStrong(int n, int m){
    int real_n = n;
    int real_m = m;
    int temp;
    while(1){
        if(n%m==0){
            break;
        }
        n%=m;
        temp = n;
        n = m;
        m = temp;
    }

    cout << real_m * real_n/m;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    ShareStrong(n,m);
    return 0;
}