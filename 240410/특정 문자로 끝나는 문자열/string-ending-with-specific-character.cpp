#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string arr[10];
    bool is_fine[10]= {};
    bool flag= false;
    char a;
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    cin >> a;

    for(int i = 0; i < 10; i++){
        if(arr[i][arr[i].length()-1]==a){
            is_fine[i]=true;
            flag = true;
        }
    }
    
    if(flag){
        for(int i = 0; i < 10; i++){
            if(is_fine[i]==true){
                cout << arr[i] << endl;
            }
        }
    }else{
        cout << "None";
    }
    
    return 0;
}