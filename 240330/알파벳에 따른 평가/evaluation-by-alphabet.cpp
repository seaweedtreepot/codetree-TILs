#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char head;
    cin >> head;

    if(head == 'S'){
        cout << "Superior";
    }else if(head == 'A'){
        cout << "Excellent";
    }else if(head == 'B'){
        cout <<"Good";
    }else if(head == 'C'){
        cout << "Usually"
    }else if(head == 'D'){
        cout << "Effort";
    }else{
        cout << "Failure";
    }
    return 0;
}