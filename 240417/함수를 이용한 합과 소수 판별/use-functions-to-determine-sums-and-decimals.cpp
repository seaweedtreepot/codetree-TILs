#include <iostream>
using namespace std;

bool IsPrime(int a){
    bool flag = true;

    for(int i = 2; i < a; i++){
        if(a%i==0){
            flag = false;
            break;
        }
    }
    return flag;
}

bool IsEven(int a){
    int ans=0;
    while(a!=0){
        ans += (a%10);
        a /= 10;
    }

    return (ans%2==0);
}

int Count(int a, int b){
    int cnt =0;
    for(int i = a; i < b+1; i++){
        if(IsPrime(i) && IsEven(i)){
            cnt++;
        }
    }
    return cnt;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    cout << Count(a,b);
    return 0;
}