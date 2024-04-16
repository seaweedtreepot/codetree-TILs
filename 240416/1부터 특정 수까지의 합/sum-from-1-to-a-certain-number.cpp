#include <iostream>
using namespace std;

int SpecialSum(int n){
    int sum =0;
    int plus = 1 + n;
    for(int i = 1; i <= n/2; i++){
        sum += plus;
    }
    if(n%2==1){
        sum+=n/2+1;
    }
    return sum/10;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    cout << SpecialSum(N);
    return 0;
}