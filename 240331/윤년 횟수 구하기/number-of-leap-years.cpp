#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int year;
    cin >> year;
    int year_count=0;
    for(int i = 1; i <=year;i++ ){
        if(i%4==0){
            if(i%100 ==0 && i%400 != 0){

            }
            else{
                year_count++;
            }
        }
    }
    cout << year_count;
    return 0;
}