#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >>n;

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n; j++){
            if(i==0 || j==n-1|| i>j){
                cout <<"* ";
            }
            else{
               // if(i>j){
              //      cout << "* ";l
            //    }
                
                
                cout << "  ";

            }
        }
        cout << endl;
    }
    return 0;
}