#include <iostream>
using namespace std;

int ElbowBendingInside(int N){
    if(N<=2){
        return N;
    }
    return ElbowBendingInside(N-2) + N;
}
    
int main() {
    // 여기에 코드를 작성해주세요.
    int N;cin >> N;
    cout << ElbowBendingInside(N);
    return 0;
}