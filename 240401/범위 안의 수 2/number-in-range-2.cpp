#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int sum_val=0;
    int cnt=0;
    int n;

    for(int i = 0 ; i < 10; i++){
        cin >> n;
        if(n>=0 && n<=200){
            sum_val += n;
            cnt++;
        }
        
    }
    cout.precision(1);
    cout << fixed;
    cout << sum_val << " " <<  (double)sum_val/cnt;
    return 0;
}