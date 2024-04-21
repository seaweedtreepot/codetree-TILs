#include <iostream>
using namespace std;

int Count(int n,int cnt){
    if(n==1){
        return cnt;
    }else if(n%2==0){
        n/=2;
       return Count(n,++cnt);
    }else if(n%2==1){
        n*=3; n++;
       return Count(n,++cnt);
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << Count(n,0);
    return 0;
}