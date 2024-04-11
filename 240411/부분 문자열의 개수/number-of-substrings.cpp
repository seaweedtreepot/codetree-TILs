#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string input_str, objective_str;
    cin >> input_str >> objective_str;
    int cnt = 0;
    for(int i = 0; i < input_str.length()+1 - objective_str.length();i++){
        if(input_str.substr(i,objective_str.length())==objective_str){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}