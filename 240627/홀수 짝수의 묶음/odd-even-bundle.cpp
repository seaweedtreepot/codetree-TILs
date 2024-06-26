#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int odd,even=0;

    int arr[1000];
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
            if(even!=0){
                even--;
                i++;
            }else if(odd!=0){
                if(odd==1){
                    i--;
                    break;
                }else{
                    odd-=2;
                    i++;
                }
            }else{
                break;
            }
        }else if(i%2==1){
            if(odd!=0){
                odd--;
                i++;
            }else{
                break;
            }
        }
    }

    cout << i;
    return 0;
}