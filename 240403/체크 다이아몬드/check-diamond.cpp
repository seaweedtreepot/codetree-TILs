#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n=0; cin >> n;

    for(int i = 0; i < n; i++){

        for(int j=0; j < n-1-i;j++){
            cout << " ";
        }
        for(int j = 0; j < i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }

    for(int i=0; i < n-1; i++){
        for(int j = 0; j < i+1; j++){
            cout << " ";
        }
        for(int j = 0;j<n-1-i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}