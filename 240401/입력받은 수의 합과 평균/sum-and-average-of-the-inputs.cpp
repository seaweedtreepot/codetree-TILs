#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout<<fixed;
    cout.precision(1);
    int k;
    int sum_val=0;
    for(int i = 0; i < n; i++){
        cin >> k;
        sum_val+=k;
    }

    cout << sum_val << " " << (double)sum_val/n;
    return 0;
}