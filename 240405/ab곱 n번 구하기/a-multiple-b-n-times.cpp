#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n ;
    cin >> n;
    int a, b;
    
    for(int i = 0; i < n; i++){
        cin >> a >> b ;
        int prod =1;
        for(int j = a; j <= b; j++){
            prod *= j;
        }
        cout << prod<<endl;

    }

    return 0;
}