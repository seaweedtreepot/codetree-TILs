#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    while(1){
        cin >> n;

        if(n==1){
            cout << "John" << "\n";
        }else if(n==2){
            cout << "Tom" << "\n";
        } else if(n==3){
            cout << "Paul" << "\n";
        }else if(n==4){
            cout << "Sam" << "\n";
        }else{
            cout << "Vacancy";
            break;
        }
    }
    return 0;
}