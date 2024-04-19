#include <iostream>
using namespace std;

void PrintHello(int N){
    if(N==0){
        return;
    }
    PrintHello(N-1);
    cout << "HelloWorld"<<endl
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    PrintHello(n);
    return 0;
}