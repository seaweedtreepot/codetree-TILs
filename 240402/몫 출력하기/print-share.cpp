#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int cnt =0;

    int n=0;

    while(1){
        cin >>n;
        if(n%2==0){
            cout << n/2 <<"\n";
            cnt++;
             if(cnt==3){
            break;
        }
        }
    
    
    }
    return 0;
}