#include <iostream>
using namespace std;

int Factorial(int N){
    if(N==0){
        return 1;
    }

    return N * (Factorial(N-1));
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    cout << Factorial(N);
    return 0;
}