#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int sum_val=0;
    for(int i = 1; i < n ; i++){
        if(n%i==0){
            sum_val+=i;
        }
    }

    cout << (sum_val==n?'P':'N');
    return 0;
}