#include <iostream>
using namespace std;
void PrintUp(int N){
if(N==0){
    return;
}
PrintUp(N-1);
cout << N << " ";
}
void PrintDonw(int N){
    if(N==0){
        return;
    }
    cout << N << " ";
    PrintDonw(N-1);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    PrintUp(N);
    cout << endl;
    PrintDonw(N);
    return 0;
}