#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    int n=0;
    int prod = 1;
    int max = 0;
    while(a!=0){
        if(a%10==0){
            max = prod;
        }
        n+=a%10*prod;
        a/=10;
        prod*=2;
    }//원본 n

    n+=max;
    cout << n;
    return 0;
}