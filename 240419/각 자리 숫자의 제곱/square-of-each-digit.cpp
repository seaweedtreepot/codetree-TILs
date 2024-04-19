#include <iostream>
using namespace std;
int SumOfSquare(int N){
    if(N<10){
        return N*N;
    }
    int temp = N%10;
    N /=10;
    //cout << temp*temp << endl;
    return SumOfSquare(N) + temp*temp;

}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    cout << SumOfSquare(N);
    return 0;
}