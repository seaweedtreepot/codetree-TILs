#include <iostream>
using namespace std;

void ShareWeak(int n, int m){
    while(1){
        if(n%m==0){
            cout << m;
            break;
        }
        n %= m;
        int temp = n;
        n=m;
        m=temp;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    ShareWeak(n,m);
    return 0;
}