#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, a = 0;
    cin >> a >> n;

    for(int i = 0; i < 9 ; i++){
        int temp = n;
        while(temp >= a){
            if(temp%2==0){
                cout << temp << " * " << i+1 << " = " << temp*(i+1);
                if(temp!=a){
                    cout << " / ";
                }
            }
            temp--;
        }
        cout << endl;
    }
    return 0;
}