#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int month; cin >> month;

    if(month<=2){
        cout << "Winter";
    }
    else if(month>=12){
        cout << "Winter";
    }
    else if(month<=5) {
        cout << "Spring";
    }else if(month <= 8){
        cout << "Summer";
    }else if (month<=11){
        cout << "Fall";
    }
    return 0;
}