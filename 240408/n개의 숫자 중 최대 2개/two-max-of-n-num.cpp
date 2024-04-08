#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    } 
   int min_val = arr[0];
   int snd_min_val = arr[1];
   for(int i = 0; i < n; i++){
        if(min_val < arr[i]){
            snd_min_val = min_val;
            min_val = arr[i];
        }else if(snd_min_val < arr[i]){
            snd_min_val = arr[i];
        }
   }


    cout << min_val << " " << snd_min_val ;
    
    return 0;
}