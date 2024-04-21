#include <iostream>
using namespace std;
int PlusDigit(int sum,int digit_sum){
    if(sum<10){
        digit_sum+=sum;
        return digit_sum;
    }
    digit_sum += (sum%10);
    sum /=10;
    return PlusDigit(sum,digit_sum);
}

int SumOfThree(int a,int b, int c){
    return a*b*c;
}
int SumOfDigit(int a,int b, int c){
    int sum = SumOfThree(a,b,c);

    return PlusDigit(sum,0);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;

    cout << SumOfDigit(a,b,c);
    return 0;
}