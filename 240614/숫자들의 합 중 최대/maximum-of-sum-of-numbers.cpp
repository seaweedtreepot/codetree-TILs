#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int x,y;
    cin >>x >>y;
    int max = 0;
    for(int i = x; i<=y;i++){
        int t = i;
        int sum = 0;
        while(t!=0){
            sum += t%10;
            t/=10;
        }
        if(sum > max){
            max = sum;
        }
    }

    cout << max;
    return 0;
}