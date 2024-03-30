#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int seat;
    cin >> seat;

    if(seat == 1){
        cout << "John";
    }
    else if (seat == 2){
        cout << "Tom";
    }
    else if (seat==3){
        cout << "Paul";
    }
    else {
        cout << "Vacancy";
    }
    return 0;
}