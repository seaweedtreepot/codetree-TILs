#include <iostream>
#define UNDIFINED 2
#define LEFT 0
#define RIGHT 1
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[101];
    
    cin >> n;
    for(int i = 0; i < 101; i++){
        arr[i] = UNDIFINED;
    }
    //cout << LEFT << " " << RIGHT;

    int t1,t2;
    int cnt= 0;
    for(int i = 0; i < n; i++){
        cin >> t1 >> t2;
        //cout << i << endl;
        if(arr[t1]==UNDIFINED){
            arr[t1] = t2;
            //cout << arr[t1] << endl;
        }else if(arr[t1]==LEFT && t2 == RIGHT){
            cnt++;
            arr[t1] = RIGHT;
            //cout << arr[t1] << endl;
        }else if(arr[t1]==RIGHT && t2 == LEFT){
            cnt++;
            arr[t1] = LEFT;
            //cout << arr[t1] << endl;
        } else {
            
        }
        //cout << t1<< " "<< arr[t1] << " " << t2 << endl;
    }

    cout << cnt;
    return 0;
}