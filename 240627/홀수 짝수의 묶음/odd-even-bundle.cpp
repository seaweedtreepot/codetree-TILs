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
            //cout << "짝"<< " ";
        }else{
            //cout << "홀" << " ";
        }
        //cout << odd << " " << even << endl;

        if(i%2==0){
            if(even!=0){
                even--;
            }else if(odd!=0){

                if(odd==1){
                    //cout << "발동" << endl;
                    //cout << i << endl;
                    i-=2;
                    //cout << i << endl;
                    break;
                }else{
                    odd-=2;
                }
            }
        }else if(i%2==1){
            if(odd!=0){
                odd--;
            }else{
                //cout << "q" <<endl;
                i--;
                break;
            }
        }
        if(odd==0 && even==0)
            break; 
        i++;  
        //cout << i << endl;
    }

    cout << i+1;
    return 0;
}