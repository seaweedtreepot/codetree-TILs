#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int odd,even=0;

    int arr[100];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            even++;
        }
    }
    odd = n-even;
    int i = 0;
    while(1){
        if(i%2==0){
            if(even != 0){
                even--;
            }else if(odd!=0){
                if(odd==1){
                    i--;
                    cout << i << endl;
                    break;
                }
                odd-=2;
            }
            //cout << i << endl;
        }else{
            if(odd==0){
                break;
            }else{
                odd--;
            }
            //cout << i << endl;
        }
        if(odd==0 && even==0)
            break; 
        i++;  
    }

    cout << i+1;
    return 0;
}