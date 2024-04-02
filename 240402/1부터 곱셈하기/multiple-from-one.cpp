#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int prod=1;
    cin  >> n;
    for(int i = 1; i <= 10 ; i++){
        prod*=i;
        if(prod>=n)
            {
                cout << i;
                break;
            }
    }
    return 0;
}